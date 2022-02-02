#include<stdio.h>
void selectionSort(int a[],int n)
{
    int minpos,t;
    for(int i=0;i<n;i++)
    {
        minpos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minpos]>a[j])
            {
                minpos=j;
            }
        }
        t=a[minpos];
        a[minpos]=a[i];
        a[i]=t;
    }
    printf("After Sorting using Selection Sort\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements into array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionSort(a,n);
}
