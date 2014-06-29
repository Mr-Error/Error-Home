//factorial.cpp---function for factorial
#include <iostream>

using namespace std;

long long fac(int);

int main()
{
   cout<<"Enter a number (<20):";
   int n;
   cin>>n;
   long long res=fac(n);
   cout<<n<<"! = "<<res<<endl;
   return 0;
}


long long fac(int n)
{
   int const Size=20;
   long long fact[Size];

   fact[0]=fact[1]=1LL;

   for (int i=2;i<Size;i++)
     fact[i]=fact[i-1]*i;

   return fact[n];
}
