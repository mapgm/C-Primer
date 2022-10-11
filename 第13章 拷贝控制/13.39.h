#include <memory>
#include <string>

// 类vector类内存分配策略的简化实现
class StrVec
{
public:
	StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
	StrVec(const StrVec&);  // 拷贝构造函数
	StrVec& operator=(const StrVec&);  // 拷贝赋值运算符
	~StrVec();  // 析构函数
	
	void push_back(const std::string&);  // 添加元素时拷贝元素
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	std::string *begin() const { return elements; }
	std::string *end() const { return first_free; }
	
	void reserve(size_t new_cap);
	void resize(size_t count);
	void resize(size_t count, const std::string&);
	
private:
	// 工具函数，被拷贝构造函数、赋值运算符和析构函数所使用
	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
	// 销毁元素并释放内存
	void free();
	// 工具函数，被添加元素的函数使用
	void chk_n_alloc() { if (size() == capacity()) reallocate(); }
	//获得更多内存并拷贝已有元素
	void reallocate();
	void alloc_n_move(size_t new_cap);
	
private:
	std::string *elements;  // 指向数组首元素的指针
	std::string *first_free;  // 指向数组第一个空闲元素的指针
	std::string *cap;  // 指向数组第一个空闲元素的指针
	std::allocator<std::string> alloc;  // 分配元素
};
