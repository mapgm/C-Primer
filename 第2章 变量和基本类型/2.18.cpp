#include<iostream>
int main()
{
	int val = 12, val2 = 15;
	int *p = &val;
	
	std::cout << val << ' ' << p << ' ' << *p << std::endl;

	// �ı�ָ���ֵ
	p = &val2;
	
	std::cout << val << ' ' << p << ' ' << *p << std::endl;
	
	// �ı�ָ����ָ�����ֵ
	*p = 10;
	
	std::cout << val << ' ' << p << ' ' << *p << std::endl;
	
	return 0;
}
