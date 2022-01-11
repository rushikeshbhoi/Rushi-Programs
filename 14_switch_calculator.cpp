#include<iostream>
using namespace std;
int main()
{   
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;

    char operation;
    cout<<"Enter Operation which you want to perform :";
    cin>>operation;

    switch(operation)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Enter another operation"<<endl;
        break;
    }

    return 0;
}