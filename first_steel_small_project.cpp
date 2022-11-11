#include<iostream>
using namespace std;
int main()
{
    int h,t;
    double c;
    cout<<"enter the hardness:";
    cin>>h;
    cout<<"enter the carbon level:";
    cin>>c;
    cout<<"enter the tensile:";
    cin>>t;
    if(h>=50 && c>=0.7 && t>=5600)
    {
        cout<<"A grade"<<endl;
        cout<<"_______________________"<<endl;
    }
    else if(h>=50 && c>=0.7)
    {
        cout<<"B grade:"<<endl;
        cout<<"_______________________"<<endl;
    }
    else if(c>=0.7 && t>=5600)
    {
        cout<<"C grade:"<<endl;
        cout<<"_______________________"<<endl;
    }
    else if(h>=50 && t>=5600)
    {
        cout<<"D grade"<<endl;
        cout<<"_______________________"<<endl;
    }
    else if (h>=50 || c>=0.7 || t>=5600)
    {
        cout<<"E grade"<<endl;
        cout<<"_______________________"<<endl;
    }
    else
    {
        cout<<" F grade"<<endl;
        cout<<"_______________________"<<endl;
    }
    return 0;
}
