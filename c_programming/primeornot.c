#include <stdio.h>

int main()
{
    int num,i,rem;
    printf("Please enter the number you want checked\n");
    scanf("%d",&num);
    if(num<=1)
	{
		printf("Number should be greater than 1");
		return 0;
	}
    for(i=2;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        break;
    }
    if(rem!=0 || num==2)
    printf("\n%d is a prime number",num);
    else if(rem==0)
    printf("\n%d is not a prime number",num);

    return 0;
}
