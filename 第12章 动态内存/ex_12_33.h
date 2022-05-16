#ifndef EX12_27_H
#define EX12_27_H

#include <fstream>
#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>

class QueryResult;

class TextQuery
{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream&);
	QueryResult query(const std::string& s) const;
	
private:
	std::shared_ptr<std::vector<std::string>> file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

class QueryResult
{
public:
	using line_no = std::vector<std::string>::size_type;
	using Iter = std::set<line_no>::iterator;
	friend std::ostream& print(std::ostream&, const QueryResult&);
	QueryResult(std::string s,
		std::shared_ptr<std::set<TextQuery::line_no>> p,
		std::shared_ptr<std::vector<std::string>> f) :
		sought(s), lines(p), file(f) 
		{}
	Iter begin() const { return lines->begin(); }
	Iter end() const { return lines->end(); }
//	std::shared_ptr<std::vector<std::string>> get_file() const 
//	{ 
//		return std::make_shared<std::vector<std::string>>(file); 
//	}
private:
	std::string sought;
	std::shared_ptr<std::set<TextQuery::line_no>> lines;
	std::shared_ptr<std::vector<std::string>> file;
};

std::ostream& print(std::ostream&, const QueryResult&);

#endif
