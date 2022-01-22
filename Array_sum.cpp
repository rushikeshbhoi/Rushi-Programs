#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter Input:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    cout<<"\nThe sum of array elements are:"<<sum;

    return 0;
}