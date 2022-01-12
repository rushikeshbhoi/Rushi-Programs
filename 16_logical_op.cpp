#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter number :";
    cin>>n;

    if(n%2==0 && n%3==0)
    {
        cout<<"It is Divisible by Both 2 and 3"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"It is only Divisible by 2"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"It is only Divisible by 3"<<endl;
    }
    else{
        cout<<"It is Divisible by None"<<endl;
    }

    return 0;
}