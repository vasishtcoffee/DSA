#include<stdio.h>
int delete(int arr[],int ele,int n)
{
    int i;
    for(i=0;i<n;i++)
    { if(arr[i]==ele)
        break;
    }
    if(i==n)
     return n;
    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    return (n-1);



}
int main()
{
    int arr[6]={1,2,3,4,5};
    printf("Enter the element to be deleted: ");
    int ele;
    scanf("%d",&ele);
    int n=5;
    n=delete(arr,ele,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;

}