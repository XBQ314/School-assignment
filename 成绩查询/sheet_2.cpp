#include <iostream>
#include <string>
#include "head.h"

std::string::size_type position;
void sheet_2()
{
	if (quanti == 1&& banji == 0&& geren == 0)
	{
		std::cout<<"Up or Down?Up 0,Down 1."<<std::endl;
		std::cin>>down;
		if(ID == 1&&NAME == 0&&POINT == 0)//ѡ��ȫ���ѯ����ѧ������
		{
			whole_paixu_id();
		}
		if(ID == 0&&NAME == 1&&POINT == 0)//ѡ��ȫ���ѯ������������
		{
			whole_paixu_name();
		}
		if(ID == 0&&NAME == 0&&POINT == 1)//ѡ��ȫ���ѯ������������������
		{
			whole_paixu_point();
		}
	}
	if (quanti == 0&& banji == 1&& geren == 0)
	{
		find_IDclass();
		std::cout<<"Up or Down?Up 0,Down 1."<<std::endl;
		std::cin>>down;
		if(ID == 1&&NAME == 0&&POINT == 0)//ѡ��༶��ѯ����ѧ������
		{
			class_paixu_id();
		}
		if(ID == 0&&NAME == 1&&POINT == 0)//ѡ��༶��ѯ������������
		{
			class_paixu_name();
		}
		if(ID == 0&&NAME == 0&&POINT == 1)//ѡ��༶��ѯ������������������
		{
			class_paixu_point();
		}
	}
	if (quanti == 0&& banji == 0&& geren == 1)
	{
		std::string chaxun_back = chaxun;
		//��һ��ͬѧ�ĳɼ���ע����
		//copy��ʼ��
		for (int i = 0; i <= 99; i++)
		{
			copy[i].ID = '\0';
			copy[i].NAME = '\0';
			copy[i].POINT = '\0';
			copy[i].mingci_banji = 0;
			copy[i].mingci_quanti = 0;
		}


		chaxun = "06A181";
		find_IDclass();
		class_paixu_point();
		for(i = 0; i <= k;i++)
		{
			for(int j = 1;j <= total_number;j++)
			{
				if(student[j].ID == copy[i].ID)
				{
					student[j].mingci_banji = copy[i].mingci_banji;
				}
			}
		}
		//copy��ʼ��
		for (i = 0; i <= 99; i++)
		{
			copy[i].ID = '\0';
			copy[i].NAME = '\0';
			copy[i].POINT = '\0';
			copy[i].mingci_banji = 0;
			copy[i].mingci_quanti = 0;
		}

		chaxun = "06A182";
		find_IDclass();
		class_paixu_point();
		for(i = 0; i <= k;i++)
		{
			for(int j = 1;j <= total_number;j++)
			{
				if(student[j].ID == copy[i].ID)
				{
					student[j].mingci_banji = copy[i].mingci_banji;
				}
			}
		}

		for (i = 0; i <= 99; i++)
		{
			copy[i].ID = '\0';
			copy[i].NAME = '\0';
			copy[i].POINT = '\0';
			copy[i].mingci_banji = 0;
			copy[i].mingci_quanti = 0;
		}

		chaxun = "06A183";
		find_IDclass();
		class_paixu_point();
		for(i = 0; i <= k;i++)
		{
			for(int j = 1;j <= total_number;j++)
			{
				if(student[j].ID == copy[i].ID)
				{
					student[j].mingci_banji = copy[i].mingci_banji;
				}
			}
		}
		chaxun = chaxun_back;
	}
	return;
}
