#include <stdio.h>

int f(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return f(n-1) + f(n-2);  //쳲�����
}

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", f(n));
    }

    return 0;
}
