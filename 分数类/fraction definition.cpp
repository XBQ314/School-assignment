#include <cmath>
#include "fenshu.h"
fraction::fraction(int x,int y) //���캯�� Ĭ��ֵΪ1��1
{
	above = x;
	below = y;
}
void fraction::reduction() 
{
	int a,b,c;
	if(above>below)
	{
		a = above;
		b =below;
	}
	else 
	{
		a = below;
		b = above;
	}
	c = b;
	while(c != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	above /= a;
	below /= a;
}
void fraction::makeCommond(fraction &a) //ͨ��
{
	int same_below = this->below * a.below;
	this->above *= a.below;
	a.above *= this->below;
	this->below = same_below;
	a.below = same_below;
}

fraction fraction::operator +(fraction a)//���������
	{
		fraction result;
		this->makeCommond(a);
		result.below = this->below;
		result.above = this->above + a.above;
		result.reduction();
		return result;
	}
fraction fraction::operator -(fraction a) //���������
	{
		fraction result;
		this->makeCommond(a);
		result.below = this->below;
		result.above = this->above - a.above;
		result.reduction();
		return result;
	}

fraction fraction::operator * (fraction a) //���������
{
	fraction result;
	result.above = this->above*a.above;
	result.below = this->below*a.below;
	result.reduction();
	return result;
}

fraction fraction::operator /(fraction a) //���������
{
	fraction result;
	a.reciprocal();
	result = *this * a;
	return result;
}


fraction fraction::reciprocal() //����
{
	if (this->above != 0) 
	{
		int temp = this->above;
		this->above = this->below;
		this->below = temp;
		return *this;
	}
	else 
	{
		this->display();
		std::cout << "���������Ե�����" << std::endl;
		return *this;
	}
}

bool fraction::operator ==(fraction a) //�߼���������
{
	fraction b = *this - a;
	if (b.above == 0) 
	{
		return true;
	}
	else return false;
}

bool fraction::operator > (fraction a) //��������
{
	fraction b = *this - a;
	if ((b.above > 0 && b.below > 0) || (b.above < 0 && b.below < 0)) return true;
	else return false;
}

bool fraction::operator < (fraction a) //С������
{
	fraction b = *this - a;
	if ((b.above > 0 && b.below < 0) || (b.above < 0 && b.below>0))return true;
	else return false;
}


void fraction::display() const//��ʾ����
{
	std::cout << above <<std::endl<< "---" << std::endl<<below << std::endl;
	if (abs(this->above) > abs(this->below)) 
	{
		std::cout << "���Ǹ��ٷ������ɻ�Ϊ  " << this->above / this->below << '+' << this->above%this->below << '/' << this->below << std::endl;
	}
	std::cout << std::endl;
}


void fraction::input()//�������
{
	std::cout<<"��������ӣ�������"<<std::endl;
	std::cin>>this->above;
	int b = 1;
	do
	{
		std::cout<<"�������ĸ��������,���ܵ�����"<<std::endl;
		std::cin>>b;
	}while(!b);
	this->below = b;
	this->reduction();
}