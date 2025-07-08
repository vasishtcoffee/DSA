#include<stdio.h>
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n==cap)
        return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
    
}
int main()
{
   int arr[6]={1,2,3,4,5};
   int x;
   printf("Enter the position: ");
   int pos;
   scanf("%d",&pos);
   printf("Enter element: ");
   scanf("%d",&x);
   int cap;
   printf("Enter capacity: ");
   scanf("%d",&cap);
   int n=5;//using 5 elements currently
   insert(arr,n,x,cap,pos);
   for(int i=0;i<6;i++)
        printf("%d",arr[i]);
   return 0;
}