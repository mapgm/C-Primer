#include<iostream>
int main()
{
	int i = 0, &r = i;
	
	//��ͬ������int����
	auto a = i;
	decltype(i) b = i;
	
	//��ͬ��c ��һ��int���ͣ���d ��һ�� int&
	auto c = r;
	decltype(r) d = r;
	
	return 0;
}
