#include<iostream>
using namespace std;
int main()
{
    int salary;
    cin>>salary;

    if(salary > 5000)
    {
        cout<<"Going with 6 Friends\n";
        if(salary >  8000)
        {
            cout<<"Going for goa trip\n";
        }
        else {
            cout<<"Going for harihar fort\n";
        }
    }
    else if(salary >2000)
    {
        cout<<"Going with 3 Friends\n";
    }
    else
    {
        cout<<"Going with 2 Friends\n";
    }

    return 0;
}