#include <fstream>
#include <iostream>
#include "head.h"
STUDENT student[1000];
STUDENT copy[100];//Ϊ�˽�һ�������ɸѡ������׼���ĸ���
void read_data()
{
	//��ʼ��
	quanti = 0;
	banji = 0;
	geren = 0;
	ID = 0;
	NAME = 0;
	POINT = 0;
	total_number = 0;//��¼������
	k = 0;//��¼һ�����м�����
	xianshi = 0;
	for (int i = 0; i <= 99; i++)
	{
		copy[i].ID = '\0';
		copy[i].NAME = '\0';
		copy[i].POINT = '\0';
		copy[i].mingci_banji = 0;
		copy[i].mingci_quanti = 0;
	}


	i = 0;
	std::ifstream file;
	file.open("list.txt");
	if (!file.is_open())
	{
		std::cout<<"�ļ���ʧ��"<<std::endl;
		return;
	}
	do
	{
		file>>student[i].ID;
		file>>student[i].NAME;
		file>>student[i].POINT;
		i++;
		total_number = i-1;//��¼������
	}
	while(!file.eof() && i <= 999);
	//���ˣ���list�е���Ϣ������һ���Խṹ��ΪԪ�ص������� student[];
	//����ȡ����ȷ��
	/*for(i = 0;i <= total_number; i++)
	{
		cout<<student[i].ID<<endl;
		cout<<student[i].NAME<<endl;
		cout<<student[i].POINT<<endl;
	}*/
	return;
}
//cout<<student[i].ID<<"  "<<student[i].NAME<<"  "<<student[i].POINT<<endl;
