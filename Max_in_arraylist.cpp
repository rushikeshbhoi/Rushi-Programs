#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter input:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter Array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];

    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    cout<<"\nThe maximum element in the array list is "<<max;

return 0;
}
