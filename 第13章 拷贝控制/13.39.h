#include <memory>
#include <string>

// ��vector���ڴ������Եļ�ʵ��
class StrVec
{
public:
	StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
	StrVec(const StrVec&);  // �������캯��
	StrVec& operator=(const StrVec&);  // ������ֵ�����
	~StrVec();  // ��������
	
	void push_back(const std::string&);  // ���Ԫ��ʱ����Ԫ��
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	std::string *begin() const { return elements; }
	std::string *end() const { return first_free; }
	
	void reserve(size_t new_cap);
	void resize(size_t count);
	void resize(size_t count, const std::string&);
	
private:
	// ���ߺ��������������캯������ֵ�����������������ʹ��
	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
	// ����Ԫ�ز��ͷ��ڴ�
	void free();
	// ���ߺ����������Ԫ�صĺ���ʹ��
	void chk_n_alloc() { if (size() == capacity()) reallocate(); }
	//��ø����ڴ沢��������Ԫ��
	void reallocate();
	void alloc_n_move(size_t new_cap);
	
private:
	std::string *elements;  // ָ��������Ԫ�ص�ָ��
	std::string *first_free;  // ָ�������һ������Ԫ�ص�ָ��
	std::string *cap;  // ָ�������һ������Ԫ�ص�ָ��
	std::allocator<std::string> alloc;  // ����Ԫ��
};
