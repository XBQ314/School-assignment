#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "head.h"
bool down = 1;//����������

//���±�������ѡ��ģʽ
bool quanti = 0;
bool banji = 0;
bool geren = 0;
bool ID = 0;
bool NAME = 0;
bool POINT = 0;

int total_number = 0;//��¼������
int k = 0;//��¼һ�����м�����
std::string chaxun;
int main()
{
	char a;
	bool i = 1;
	while(i)
	{
	read_data();
	sheet_1();
	sheet_2();
	sheet_3();	
	std::cout<<"Start again? Press 'c' to continue, else to quit."<<std::endl;
	a = getch();
	switch(a)
	{
	case'c':case'C': i = 1;break;
	default: i = 0;break;
	}
	}
	return 0;
}