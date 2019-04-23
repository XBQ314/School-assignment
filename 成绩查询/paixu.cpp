#include <iostream>
#include "head.h"
void whole_paixu_point()
{
	//对全体按照分数降序排序
	for(int i = 1;i<=total_number; i++)
	{
		for(int j = 1; j < i; j++)
		{
			bool insert = student[i].POINT>student[j].POINT;
			if(insert)
			{
				while(j < i)
				{
					std::swap(student[i],student[j++]);
				}
			}
		}
	}
	//标注全体名次
	int j = 1;
	for(i = 1;i<total_number;i++)
	{
		if (student[i].POINT > student[i+1].POINT)
		{
			student[i].mingci_quanti = j;j++;student[i+1].mingci_quanti = j;
		}	
		if (student[i].POINT == student[i+1].POINT)
		{
			student[i].mingci_quanti = j;student[i+1].mingci_quanti = j;
		}
	}
	return;
}
void whole_paixu_id()
{
	//对全体进行学号降序排序
	for(int i = 1;i<=total_number; i++)
	{
		for(int j = 1; j < i; j++)
		{
			bool insert = student[i].ID>student[j].ID;
			if(insert)
			{
				while(j < i)
				{
					std::swap(student[i],student[j++]);
				}
			}
		}
	}
	return;
}
void whole_paixu_name()
{
	//对全体进行姓名降序排序
	for(int i = 1;i<=total_number; i++)
	{
		for(int j = 1; j < i; j++)
		{
			bool insert = student[i].NAME>student[j].NAME;
			if(insert)
			{
				while(j < i)
				{
					std::swap(student[i],student[j++]);
				}
			}
		}
	}
	return;
}
void find_IDclass()
{
	//把一个班找出来放在copy中
	for(int i = 1; i <= total_number;i++)
	{
		position = (student[i].ID).find(chaxun);
		if(position != (student[i].ID).npos)//找到匹配
		{
			copy[k] = student[i];
			k++;
		}
	}
	return;
}
void find_NAMEclass()
{
	//把一个班找出来放在copy中
	for(int i = 1; i <= total_number;i++)
	{
		position = (student[i].NAME).find(chaxun);
		if(position != (student[i].NAME).npos)//找到匹配
		{
			copy[k] = student[i];
			k++;
		}
	}
	return;
}
void class_paixu_point()
{

	//对一个班按照分数排序
	for(int i = 0; i <= k; i++)
	{
		for(int j = 0; j < i; j++)
		{
			bool insert = copy[i].POINT>copy[j].POINT;
			if(insert)
			{
				while(j < i)
				{
					std::swap(copy[i],copy[j++]);
				}
			}
		}
	}
	//在副本中对一个班排名
	int j = 1;
	for(i = 0;i <= k;i++)
	{
		if (copy[i].POINT > copy[i+1].POINT)
		{
			copy[i].mingci_banji = j;j++;copy[i+1].mingci_banji = j;
		}	
		if (copy[i].POINT == copy[i+1].POINT)
		{
			copy[i].mingci_banji = j;copy[i+1].mingci_banji = j;
		}
	}
	return;
}
void class_paixu_name()
{
	//对一个班按照名字排序
	for(int i = 0; i <= k; i++)
	{
		for(int j = 0; j < i; j++)
		{
			bool insert = copy[i].NAME>copy[j].NAME;
			if(insert)
			{
				while(j < i)
				{
					std::swap(copy[i],copy[j++]);
				}
			}
		}
	}
	return;
}
void class_paixu_id()
{
	//对一个班按照学号降序排序
	for(int i = 0; i <= k; i++)
	{
		for(int j = 0; j < i; j++)
		{
			bool insert = copy[i].ID>copy[j].ID;
			if(insert)
			{
				while(j < i)
				{
					std::swap(copy[i],copy[j++]);
				}
			}
		}
	}
	return;
}