#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int prime = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 && i != 2)
        {
            prime = 1;
            break;
        }
    }

    if (prime == 1 || num <= 1)
    {
        printf("The number is not a prime number.\n");
    }
    else
    {
        printf("The number is a prime number.\n");
    }

    return 0;
}
