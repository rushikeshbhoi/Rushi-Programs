#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;

    while(n>0)      // It will only terminate until we give it negative value
    {
        cout<<n<<endl;
        cin>>n;
    }

    return 0;
}