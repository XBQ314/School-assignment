#ifndef fenshu_h_
#define fenshu_h_

#include <iostream>


class fraction
{
private:
	int above; //����
	int below; //��ĸ
	void reduction(); //Լ��
	void makeCommond(fraction &); //ͨ��
public:
	fraction(int x=1,int y=1);//���캯��
	fraction operator +(fraction); //���������
	fraction operator -(fraction); //���������
	fraction operator * (fraction); //���������
	fraction operator /(fraction); //���������
	fraction reciprocal(); //����
	bool operator == (fraction); //��������
	bool operator >(fraction); //��������
	bool operator <(fraction); //С������
	void display() const; //��ʾ����
	void input(); //�������
};


#endif 
