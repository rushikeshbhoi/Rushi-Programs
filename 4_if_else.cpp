// Find the maximum no. between 3 nos.
#include<iostream>
using namespace std;
int main()
{   int a,b,c;
    cin>>a>>b>>c;
    cout<<"Maximum number is\n";
    if(a>b)
    {
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }

    if(b>a)
    {
        if(b>c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
    }

    return 0;
}