#ifndef fenshu_h_
#define fenshu_h_

#include <iostream>


class fraction
{
private:
	int above; //分子
	int below; //分母
	void reduction(); //约分
	void makeCommond(fraction &); //通分
public:
	fraction(int x=1,int y=1);//构造函数
	fraction operator +(fraction); //两分数相加
	fraction operator -(fraction); //两分数相减
	fraction operator * (fraction); //两分数相乘
	fraction operator /(fraction); //两分数相除
	fraction reciprocal(); //求倒数
	bool operator == (fraction); //等于运算
	bool operator >(fraction); //大于运算
	bool operator <(fraction); //小于运算
	void display() const; //显示分数
	void input(); //输入分数
};


#endif 
