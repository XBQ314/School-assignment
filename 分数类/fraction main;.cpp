#include "fenshu.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
	fraction a, b, c(0, 1);
	cout << "���������ʾ" << endl;
	cout << "��������������" << endl;
	cout << "��һ��" << endl;
	a.input();
	cout << "�ڶ���" << endl;
	b.input();
	a.display();
	cout << endl;
	b.display();
	cout << "�������" << endl;
	(a + b).display();
	cout << "�������" << endl;
	(a - b).display();
	cout << "�������" << endl;
	(a * b).display();
	cout << "�������" << endl;
	if (b == c) 
	{
		cout <<"�������ܵ�����"<< endl;
	}
	else 
	{
		(a / b).display();
	}
	cout << "������ȣ�" << endl;
	if (a == b)cout << "���" << endl;
	else cout << "�����" << endl;
	cout << "��һ�����ڵڶ�����" << endl;
	if (a > b)cout << "����" << endl;
	else cout << "������" << endl;
	cout << "��һ��С�ڵڶ�����" << endl;
	if (a < b)cout << "С��" << endl;
	else cout << "��С��" << endl;
	return 0;
}