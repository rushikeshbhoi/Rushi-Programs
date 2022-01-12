#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    int j;
    j = ++i + i++ - --i;   // ++i is Pre increment and i++ is Post increment
    cout<<i<<endl;//2
    cout<<j<<endl;//3


    return 0;
}