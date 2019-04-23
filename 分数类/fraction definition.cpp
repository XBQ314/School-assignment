#include <cmath>
#include "fenshu.h"
fraction::fraction(int x,int y) //构造函数 默认值为1，1
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
void fraction::makeCommond(fraction &a) //通分
{
	int same_below = this->below * a.below;
	this->above *= a.below;
	a.above *= this->below;
	this->below = same_below;
	a.below = same_below;
}

fraction fraction::operator +(fraction a)//两分数相加
	{
		fraction result;
		this->makeCommond(a);
		result.below = this->below;
		result.above = this->above + a.above;
		result.reduction();
		return result;
	}
fraction fraction::operator -(fraction a) //两分数相减
	{
		fraction result;
		this->makeCommond(a);
		result.below = this->below;
		result.above = this->above - a.above;
		result.reduction();
		return result;
	}

fraction fraction::operator * (fraction a) //两分数相乘
{
	fraction result;
	result.above = this->above*a.above;
	result.below = this->below*a.below;
	result.reduction();
	return result;
}

fraction fraction::operator /(fraction a) //两分数相除
{
	fraction result;
	a.reciprocal();
	result = *this * a;
	return result;
}


fraction fraction::reciprocal() //求倒数
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
		std::cout << "除数不可以等于零" << std::endl;
		return *this;
	}
}

bool fraction::operator ==(fraction a) //逻辑等于运算
{
	fraction b = *this - a;
	if (b.above == 0) 
	{
		return true;
	}
	else return false;
}

bool fraction::operator > (fraction a) //大于运算
{
	fraction b = *this - a;
	if ((b.above > 0 && b.below > 0) || (b.above < 0 && b.below < 0)) return true;
	else return false;
}

bool fraction::operator < (fraction a) //小于运算
{
	fraction b = *this - a;
	if ((b.above > 0 && b.below < 0) || (b.above < 0 && b.below>0))return true;
	else return false;
}


void fraction::display() const//显示分数
{
	std::cout << above <<std::endl<< "---" << std::endl<<below << std::endl;
	if (abs(this->above) > abs(this->below)) 
	{
		std::cout << "这是个假分数，可化为  " << this->above / this->below << '+' << this->above%this->below << '/' << this->below << std::endl;
	}
	std::cout << std::endl;
}


void fraction::input()//输入分数
{
	std::cout<<"请输入分子（整数）"<<std::endl;
	std::cin>>this->above;
	int b = 1;
	do
	{
		std::cout<<"请输入分母（整数）,不能等于零"<<std::endl;
		std::cin>>b;
	}while(!b);
	this->below = b;
	this->reduction();
}