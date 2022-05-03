#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string expression = "This is (pezy) and (true) or (false).";
	stack<char> stk;
	
	for (int pos = 0;(pos = expression.find_first_of('(', pos)) != string::npos;pos ++)
	{
		for (int i = pos;i < expression.size();i ++)
		{
			if (expression[i] != ')') 
			{
				stk.push(expression[i]);
			}
			else break;
		}
		
		string repstr;
		while (!stk.empty())
		{
			if (stk.top() != '(') repstr += stk.top();
			stk.pop();
		}
		
		expression.replace(pos + 1, repstr.size(), repstr);
	}
	cout << expression << endl;

	return 0;
}
