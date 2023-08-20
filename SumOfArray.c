#include<stdio.h>

int main()
{
    int Count = 0;    
    int Array[Count];
    int Sum = 0;

    printf("Enter the count of your Array : \n");
    scanf("%d",&Count);

    printf("Enter array elements : \n");
    for(int i = 1; i <= Count; i++)
    {
        scanf("%d",&Array[i]);
    }

    for (int i = 1; i <= Count; i++)
    {
        Sum = Sum + Array[i];
    }

    printf("The sum of Array is : %d\n",Sum);

    return 0;
}