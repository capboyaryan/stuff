#include <stdio.h>

int main()
{
    int num,temp,count=0,i,j,freq=0,checker,l;
    printf("Please enter the number\n");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    int arr[count];
    temp=num;
    for(i=0;i<count && temp!=0;i++)
    {
        arr[i]=temp%10;
        temp=temp/10;
    }
    for(;;) //bubble sort
    {
        for(l=0,checker=0;l<count-1;l++)
        {
            if(arr[l]>arr[l+1])
            {
            temp=arr[l];
            arr[l]=arr[l+1];
            arr[l+1]=temp;
            }
            else
            checker++;
        }
        if(checker==i-1)
            break;
    }
    for(i=0;i<count;i++)
    {
        if(arr[i]==arr[i+1] && i!=(count-1))
            continue;
        for(j=0,freq=0;j<count;j++)
        {
            if(arr[j]==arr[i])
                freq++;
        }
        printf("Frequency of %d = %d\n",arr[i],freq);
    }

    return 0;
}
