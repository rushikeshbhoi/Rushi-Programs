// Program to go out on odd days using jumping statements
#include<iostream>
using namespace std;
int main()
{
    int PockeyMoney = 3000;
    for(int date =1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        if(PockeyMoney == 0)
        {
            break;
        }
        cout<<"You can go out today!"<<endl;
        PockeyMoney -= 300;      // Daily the pocketmoney is spent by 300rs
    }

    return 0;
}