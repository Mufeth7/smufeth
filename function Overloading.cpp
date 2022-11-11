#include <iostream>

using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}

int main()
{
   cout<<"total "<<sum(10,20,30);
   cout<<"\n Total:"<<sum(10,20);
   return 0;
}
