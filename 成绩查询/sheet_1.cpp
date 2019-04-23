#include <iostream>
#include <string>
#include <conio.h>
#include "head.h"
using namespace std;
void sheet_1()
{
	char ch;
	cout<<"Which type do you choose to search for?"<<endl;
	cout<<"1:WHOLE."<<endl;
	cout<<"2:CLASS."<<endl;
	cout<<"3:INDIVIDUAL."<<endl;
	ch = getch();
	switch (ch)
	{
	case '1'://选择全体
		{
			quanti = 1;
			cout<<"What kinds of information are you willing to depend on?"<<endl;
			cout<<"1. NAME"<<endl;
			cout<<"2. STUDENT ID"<<endl;
			cout<<"3. STUDENT POINT (NOT RECOMMENDED)"<<endl;
			ch = getch();
			switch(ch)
			{
			case'1'://姓名
				{
					NAME = 1;
					break;
				}
			case'2'://学号
				{
					ID = 1;
					break;
				}
			case'3'://分数
				{
					POINT = 1;
					break;
				}
			}
			break;
		}
	case '2'://选择班级查询
		{
			banji = 1;
			cout<<"Please input the class number."<<endl;
			cout<<"One Possible example: 06A182"<<endl;
			cin>>chaxun;//input class number
			cout<<"What kinds of information are you willing to depend on?"<<endl;
			cout<<"1. NAME"<<endl;
			cout<<"2. STUDENT ID"<<endl;
			cout<<"3. STUDENT POINT (NOT RECOMMENDED)"<<endl;
			ch = getch();
			switch(ch)
			{
			case'1':
				{
					NAME = 1;
					break;
				}
			case'2':
				{
					ID = 1;
					break;
				}
			case'3':
				{
					POINT = 1;
					break;
				}
			}
			break;
		}
	case '3'://选择个人查询
		{
			geren = 1;
			cout<<"What kinds of information are you willing to depend on?"<<endl;
			cout<<"1. NAME"<<endl;
			cout<<"2. STUDENT ID"<<endl;
			ch = getch();
			switch(ch)
			{
			case'1':
				{
					NAME = 1;
					cout<<"Please Input the Name."<<endl;
					cin>>chaxun;
					break;
				}
			case'2':
				{
					ID = 1;
					cout<<"Please Input the STUDENT ID."<<endl;
					cin>>chaxun;
					break;
				}
			}
			break;
		}
	default: 
		{
			cout<<"That's Not An Optional Choice."<<endl;
			sheet_1();//start again
			break;
		}
	}
	return;
}