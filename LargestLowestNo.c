#include<stdio.h>

int main()
{   
    int No = 0;
    printf("Enter number : \n");
    scanf("%d",&No);

    int Array[No];
    printf("Enter array elements : \n");
    for(int i = 0; i < No; i++)
    {
        scanf("%d",&Array[i]);
    }

    int Max = Array[0];
    int Min = Array[0];
    
    // Logic for Maximum and Minimum Number
    for(int i = 0; i < No; i++)
    {
        if(Array[i] > Max)
        {
            Max = Array[i];
        }
        if(Array[i] < Min)
        {
            Min = Array[i];
        }
    }
    
    printf("The maximum element in array is : %d\n",Max);
    printf("The minimum element in array is : %d\n",Min);

    return 0;
}