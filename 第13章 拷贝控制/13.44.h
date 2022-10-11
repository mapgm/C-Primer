#include <memory>

class String
{
public:
	String() : String("") { } // Ĭ�Ϲ��캯��
	String(const char *); // �������캯�� ����char�����ַ���
	String(const String&); // �������캯�� ����string�����ַ���
	String& operator=(const String&); // ������ֵ�����
	~String(); // ��������
	
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
