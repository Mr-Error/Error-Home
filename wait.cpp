//wait.cpp---延时函数——wait()
#include <iostream>
#include <ctime>

using namespace std;

void wait(float);

int main()
{
   cout << "Please wait:" ;
   float w;
   cin >> w ;
   wait(w);
   cout << "Done\n" ;
   return 0;
}

void wait(float time)
{
   clock_t delay = time * CLOCKS_PER_SEC;
   clock_t start = clock();
   while (clock() - start < delay);
}
