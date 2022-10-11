#include <memory>

class String
{
public:
	String() : String("") { } // 默认构造函数
	String(const char *); // 参数构造函数 接受char类型字符串
	String(const String&); // 参数构造函数 接受string类型字符串
	String& operator=(const String&); // 拷贝赋值运算符
	~String(); // 析构函数
	
	const char *c_str() const { return elements; }
	size_t size() const { return end - elements; }
	size_t length() const { return end - elements - 1; }
	
private:
	std::pair<char*, char*> alloc_n_copy(const char*, const char*);
	void range_initializer(const char*, const char*);
	void free();
	
private:
	char *elements;
	char *end;
	std::allocator<char> alloc;
};
