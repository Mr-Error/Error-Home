//factorial2.cpp---使用函数递归实现阶乘
#include <iostream>

using namespace std;

long long res = 1LL ;     //使用函数时加上这一行

long long fac(int n);

int main()
{
   cout << "Enter a number:" ;
   int num ;
   cin >> num ;
   long long res = fac(num);
   cout << res ;
   return 0;
}

long long fac(int n)
{
   res = res * n ;
   if (n > 1)
      res = fac (n - 1);
   return res;
} 
