#include "fenshu.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
	fraction a, b, c(0, 1);
	cout << "分数类的演示" << endl;
	cout << "请输入两个分数" << endl;
	cout << "第一个" << endl;
	a.input();
	cout << "第二个" << endl;
	b.input();
	a.display();
	cout << endl;
	b.display();
	cout << "分数相加" << endl;
	(a + b).display();
	cout << "分数相减" << endl;
	(a - b).display();
	cout << "分数相乘" << endl;
	(a * b).display();
	cout << "分数相除" << endl;
	if (b == c) 
	{
		cout <<"除数不能等于零"<< endl;
	}
	else 
	{
		(a / b).display();
	}
	cout << "分数相等？" << endl;
	if (a == b)cout << "相等" << endl;
	else cout << "不相等" << endl;
	cout << "第一个大于第二个？" << endl;
	if (a > b)cout << "大于" << endl;
	else cout << "不大于" << endl;
	cout << "第一个小于第二个？" << endl;
	if (a < b)cout << "小于" << endl;
	else cout << "不小于" << endl;
	return 0;
}