#include <stdio.h>

int main() {
    float a,b,c;
    
    printf("Enter the first side\n");
    scanf("%f", &a);
    printf("Enter the second side\n");
    scanf("%F", &b);
    printf("Enter the third side\n");
    scanf("%f", &c);
    
    if(a==b && b==c && c==a)
    {
        printf("Triangle is equilateral");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("Triangle is scalene");
    }
    else {
        printf("Triangle is isosceles");
    }
    return 0;
}