#include<iostream>
using namespace std;
int main()
{
    int a;
    char b,c;
    cout<<"married or unmarried type y or n:";
    cin>>c;
    cout<<"gender m or f:";
    cin>>b;
    cout<<"enter your age:";
    cin>>a;
    if(c=='y'||c=='Y')
    {
        cout<<"you are elgible for insurance";
    }
    else if(b=='m'||b=='M')
    {
            if(a>=30)
            {
                cout<<"you are elgible for insurance";
            }
           // cout<<"you are not elgible for insurance";
        }
        else if(b=='f'||b=='F')
        {
            if(a>=25)
            {
                cout<<"you are elgible for insurance";
            }
           // cout<<"you are not elgible for insurance";
        }
    else
    {
        cout<<"you are not elgible for insurance";
    }
    return 0;

}
