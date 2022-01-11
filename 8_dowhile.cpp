#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    do
    {
        cout<<n<<endl;      // It will print the value 1 time even if it is -ve
        cin>>n;
    } while(n>0);

    return 0;
}