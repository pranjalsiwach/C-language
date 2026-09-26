#include<stdio.h>
int main()
{
    int original, reverse=0, num, remainder;
    printf("Enter the no :\n");
    scanf("%d", &num);
    original= num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if (original == reverse)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    return 0;
}