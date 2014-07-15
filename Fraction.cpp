#include "Fraction.h"
#include <iostream>

using std::cout;
using std::endl;

Fraction::Fraction(int dn_, int nr_)
{
	dn = dn_;       //分母
	nr = nr_;       //分子
	
}

//默认构造函数
Fraction::Fraction()
{
	dn = 1;
	nr = 1;
}


Fraction::~Fraction(){}

Fraction Fraction::operator+(const Fraction & Frac)const
{
	Fraction F;
	F.dn = dn * Frac.dn;      //公分母
	F.nr = Frac.nr * (F.dn / dn) + nr * (F.dn / Frac.dn);    //通分
	
	//约分
	int i = F.dn > F.nr ? F.dn : F.nr;    //把i初始化为 分子和分母中较大的一个
	while (true)
	{
		if (i > 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))    //检测i是否为公分母
			{
				F.dn = F.dn / i;                       //是则约去,然后跳出循环
				F.nr = F.nr / i;
				break;
			}
			else
			{
				--i;                                   //不是则将i减一,然后继续判断
				continue;
			}
		}
		else if (i < 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn /= i;
				F.nr /= i;
				break;
			}
			else
			{
				++i;
				continue;
			}
		}
		else
		{
			cout << "你输入的是啥玩艺?!" << endl;
		}
	}
	return F;
}

Fraction Fraction::operator-(const Fraction & Frac)const
{
	Fraction F;
	F.dn = dn * Frac.dn;      //公分母
	F.nr = Frac.nr * (F.dn / dn) - nr * (F.dn / Frac.dn);
	int i = F.dn > F.nr ? F.dn : F.nr;
	while (true)
	{
		if (i > 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn = F.dn / i;
				F.nr = F.nr / i;
				break;
			}
			else
			{
				--i;
				continue;
			}
		}
		else if (i < 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn /= i;
				F.nr /= i;
				break;
			}
			else
			{
				++i;
				continue;
			}
		}
		else
		{
			cout << "你输入的是啥玩艺?!" << endl;
		}
	}
	return F;
}

Fraction Fraction::operator*(const Fraction & Frac)const
{
	Fraction F;
	F.dn = dn * Frac.dn;
	F.nr = nr * Frac.nr;
	int i = F.dn > F.nr ? F.dn : F.nr;
	while (true)
	{
		if (i > 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn = F.dn / i;
				F.nr = F.nr / i;
				break;
			}
			else
			{
				--i;
				continue;
			}
		}
		else if (i < 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn /= i;
				F.nr /= i;
				break;
			}
			else
			{
				++i;
				continue;
			}
		}
		else
		{
			cout << "你输入的是啥玩艺?!" << endl;
		}
	}
	return F;
}

Fraction Fraction::operator/(const Fraction & Frac)const
{
	Fraction F;
	F.dn = Frac.dn * nr;
	F.nr = Frac.nr * dn;
	int i = F.dn > F.nr ? F.dn : F.nr;
	while (true)
	{
		if (i > 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn = F.dn / i;
				F.nr = F.nr / i;
				break;
			}
			else
			{
				--i;
				continue;
			}
		}
		else if (i < 0)
		{
			if ((F.dn % i == 0) && (F.nr % i == 0))
			{
				F.dn /= i;
				F.nr /= i;
				break;
			}
			else
			{
				++i;
				continue;
			}
		}
		else
		{
			cout << "你输入的是啥玩艺?!" << endl;
		}
	}
	return F;
}

void Fraction::display()
{
	cout << nr << "/" << dn << endl;
}
