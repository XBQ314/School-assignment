#include <string>
#ifndef HEAD_H
#define HEAD_H

struct STUDENT
{
	std::string ID;
	std::string NAME;
	std::string POINT;
	int mingci_banji;
	int mingci_quanti;
};
void sheet_1();//��ѡ��
void sheet_2();//�Ժ������÷���
void sheet_3();//��ʾ
void read_data();
void whole_paixu_point();
void whole_paixu_id();
void whole_paixu_name();
void find_IDclass();
void find_NAMEclass();
void class_paixu_point();
void class_paixu_name();
void class_paixu_id();
extern int total_number;
extern STUDENT student[];
extern STUDENT copy[];
extern bool down,quanti,banji,geren,ID,NAME,POINT;
extern int k;
extern std::string chaxun;//���������ѯ�Ĺؼ���
extern std::string::size_type position;
extern int xianshi;


#endif