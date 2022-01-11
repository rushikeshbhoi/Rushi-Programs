// Program to skip numbers which are divisible by 3 from 1 to 100
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue;  // It will skip the iteration when it is divisible by 3
        }
        cout<<i<<endl;
    }

    return 0;
}