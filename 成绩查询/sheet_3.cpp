#include "head.h"
#include <iostream>
#include <iomanip>
void info_student(int);
void info_copy(int);//������ʾһ���� ����Ϊ�Ǹ��˵������±�
int xianshi = 0;//���Լ�¼��ʾ�˼���

void sheet_3()
{
	if (quanti == 1&& banji == 0&& geren == 0)
	{
		if(down)
		{
			for(int i = 1;i <= total_number; i++)
			{
				info_student(i);
				if (xianshi%3 == 0)
				{
					std::cout<<"Continue?"<<std::endl;
					std::cin.get();
				}
			}
		}
		if(!down)
		{
			for(int i = total_number-1;i>=1; i--)
			{
				info_student(i);
				if (xianshi%3 == 0)
				{
					std::cout<<"Continue?"<<std::endl;
					std::cin.get();
				}
			}
		}
	}
	if (quanti == 0&& banji == 1&& geren == 0)
	{
		if(down)
		{
			for(int i = 0;i<k; i++)
			{
				info_copy(i);
				if (xianshi%3 == 0)
				{
					std::cout<<"Continue?"<<std::endl;
					std::cin.get();
				}
			}
		}
		if(!down)
		{
			for(int i = k-1;i>=0; i--)
			{
				info_copy(i);
				if (xianshi%3 == 0)
				{
					std::cout<<"Continue?"<<std::endl;
					std::cin.get();
				}
			}
		}
	}
	if (quanti == 0&& banji == 0&& geren == 1)
	{
		if (NAME == 1&& ID == 0)//ѡ����˲�ѯ����������ѯ
		{
			for(int i = 0; i <= total_number;i++)
			{
				position = (student[i].NAME).find(chaxun);
				if(position != (student[i].NAME).npos)
				{
					info_student(i);
				}
			}
		}
		if (NAME == 0&& ID == 1)//ѡ����˲�ѯ����ѧ�Ų�ѯ
		{
			for(int i = 1; i <= total_number;i++)
			{
				position = (student[i].ID).find(chaxun);
				if(position != (student[i].ID).npos)
				{
					info_student(i);
				}
			}
		}
	}
	if (xianshi == 0)
	{
		std::cout<<"Can't find anything. Please check your keyword."<<std::endl;
		chaxun = '\0';
	}
	return;
}
void info_student(int i)
{
	std::cout<<xianshi+1<<':';
	std::cout<<"ID: "<<student[i].ID<<std::endl;
	std::cout<<"NAME: "<<student[i].NAME<<std::endl;
	std::cout<<"POINT: "<<student[i].POINT<<std::endl;
	if(POINT&&banji)std::cout<<"POSITION IN CLASS: "<<student[i].mingci_banji<<std::endl;
	if(geren)std::cout<<"POSITION IN CLASS: "<<student[i].mingci_banji<<std::endl;
	if(POINT&&quanti)std::cout<<"POSITION IN WHOLE: "<<student[i].mingci_quanti<<std::endl;
	xianshi++;
	return;
}
void info_copy(int i)
{
	std::cout<<xianshi+1<<':';
	std::cout<<"ID: "<<copy[i].ID<<std::endl;
	std::cout<<"NAME: "<<copy[i].NAME<<std::endl;
	std::cout<<"POINT: "<<copy[i].POINT<<std::endl;
	if(POINT&&banji)std::cout<<"POSITION IN CLASS: "<<copy[i].mingci_banji<<std::endl;
	if(POINT&&quanti)std::cout<<"POSITION IN WHOLE: "<<copy[i].mingci_quanti<<std::endl;
	xianshi++;
	return;
}
