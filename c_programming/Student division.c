#include <stdio.h>

int main() {
    float marks;
    printf("Enter the marks of the student\n");
    scanf("%f", &marks);
    
    if(marks>=75)
    {
        printf("Honours\n");
    }
    else if(marks<75 && marks>=60)
    {
        printf("First division\n");
    }
    else if(marks<60 && marks>=45)
    {
        printf("Second division\n");
    }
    else if(marks<45)
    {
        printf("Fail\n");
    }
    return 0;
}