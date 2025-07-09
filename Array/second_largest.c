#include<stdio.h>
int second_largest(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{   int answer;
    int arr[6]={78,2,3,4,5,1};
    answer=second_largest(arr,6);
    printf("Second largest element is: %d",arr[answer]);
    return 0;
}