#include<stdio.h>


int main(){

    int num, num2, i, sum = 0;
    scanf("%i",&num);


    for (i=1; i<=num/2; i++)
    {
        if (num%i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
        printf("It is a perfect number");
    else
        printf("It is not a perfect number");





    return 0;
}
