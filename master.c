#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("\nEnter Two Numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nSum of %d and %d is: %d", a, b, c);
    getch();
    return 0;
}