//分数加减法
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction
{
private:
	int dn;    //分母
	int nr;    //分子
public:
	Fraction(int dn_, int nr_);   //构造函数
	Fraction();                   //默认构造函数
	~Fraction();                  //析构
	
	//重载操作符
 	Fraction operator+(const Fraction & Frac)const;
	Fraction operator-(const Fraction & Frac)const;
	Fraction operator*(const Fraction & Frac)const;
	Fraction operator/(const Fraction & Frac)const;
	void display();
};

#endif
