#include <stdio.h>

int main()
{
    int hundred,fifty,tens,amountWithdrawn,remainingAmount;
    printf("Please enter amount to be withdrawn:\n");
    scanf("%d",&amountWithdrawn);
    
    hundred=amountWithdrawn/100;
    fifty=(amountWithdrawn%100)/50;
    tens=((amountWithdrawn%100)%50)/10;
    remainingAmount=((amountWithdrawn%100)%50)%10;
    
    printf("The number of hundred notes is %d\n",hundred);
    printf("The number of fifty notes is %d\n",fifty);
    printf("The number of ten notes is %d\n",tens);
    printf("The remaining amount is %d\n",remainingAmount);
    return 0;
}
