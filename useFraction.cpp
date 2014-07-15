#include "Fraction.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "******************************" << endl;
	cout << "        分数计算器v4.0" << endl;
	cout << "******************************" << endl;
	while (true)
	{
	    cout << "输入E进入计算器      输入Q离开" << endl;
	    char ch;
	    cin >> ch;
        if (ch == 'e' || ch == 'E')
		{
			int nr1, dn1, nr2, dn2;
			cout << "输入分数1:(按照 分子/分母格式,先输入分子,按回车后输入分母,再按回车确认)";
			cout << endl;
			cin >> nr1;
			cout << "--\n";
			cin >> dn1;
			cout << endl;
			cout << "输入分数2:" << endl;
			cin >> nr2;
			cout << "--\n";
			cin >> dn2;
			cout << endl;
			Fraction Fr1 = Fraction(dn1, nr1);
			Fraction Fr2 = Fraction(dn2, nr2);
			Fraction F;
			cout << "a)加法   b)减法   c)乘法   d)除法   (输入a或b或c或d或e,,,别忘了回车键)";
			char ch2;
			cin >> ch2;
			switch (ch2)
			{
			    case 'a':F = Fr1 + Fr2; cout << "结果是:"; F.display();
				    break;
				case 'b':F = Fr1 - Fr2; cout << "结果是:"; F.display();
					break;
				case 'c':F = Fr1 * Fr2; cout << "结果是:"; F.display();
					break;
				case 'd':F = Fr2 / Fr1; cout << "结果是:"; F.display();
					break;
				default:cout << ch2 << "不是有效的指令,你TM在逗我?!" << endl;
			}
		}
		else if (ch == 'q' || ch == 'Q')
		{
			cout << "退出";
			return 0;
		}
		else
		{
			cout << ch << "不是有效的指令" << endl;
			continue;
		}
	}
}
