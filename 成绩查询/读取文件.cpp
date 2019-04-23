#include <fstream>
#include <iostream>
#include "head.h"
STUDENT student[1000];
STUDENT copy[100];//为了将一个班的人筛选出来而准备的副本
void read_data()
{
	//初始化
	quanti = 0;
	banji = 0;
	geren = 0;
	ID = 0;
	NAME = 0;
	POINT = 0;
	total_number = 0;//记录总人数
	k = 0;//记录一个班有几个人
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
		std::cout<<"文件打开失败"<<std::endl;
		return;
	}
	do
	{
		file>>student[i].ID;
		file>>student[i].NAME;
		file>>student[i].POINT;
		i++;
		total_number = i-1;//记录总人数
	}
	while(!file.eof() && i <= 999);
	//至此，将list中的信息放入了一个以结构体为元素的数组中 student[];
	//检查读取的正确性
	/*for(i = 0;i <= total_number; i++)
	{
		cout<<student[i].ID<<endl;
		cout<<student[i].NAME<<endl;
		cout<<student[i].POINT<<endl;
	}*/
	return;
}
//cout<<student[i].ID<<"  "<<student[i].NAME<<"  "<<student[i].POINT<<endl;
