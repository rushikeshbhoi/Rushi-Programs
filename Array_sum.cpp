#include<iostream>
using namespace std;
int main()
{   
    int n;
    int sum = 0;
    cout<<"Enter how many elements you want in the array list \n";
    cin>>n;
    
    int A[10];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum = sum + A[i];
    }
    cout<<"The sum of the array elements are :"<<sum;

    return 0;
}