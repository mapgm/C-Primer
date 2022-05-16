#include <iostream>
#include <string>
#include <memory>

using std::string;
using std::unique_ptr;
using std::cout;
using std::endl;

int main()
{
	unique_ptr<string> p1(new string("mapgm")); // unique_ptr ���ܱ�������ֵ
	
	// unique_ptr<string> p2(p1); // copy
	//                       ^
	// [����] use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&)[with _Tp = std::__cxx11::basic_string<char>; _Dp = std::default_delete<std::__cxx11::basic_string<char> >]'
	//
	// unique_ptr<string> p3 = p1; // assign
	//                      ^
	// [����] use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = std::__cxx11::basic_string<char>; _Dp = std::default_delete<std::__cxx11::basic_string<char> >]'

	cout << *p1 << endl;
	p1.reset(nullptr);
	
	return 0;
}
