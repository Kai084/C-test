#include <stdio.h>

int main()
{
    int a = 14;
    int t1 = a++;
    int t2 = ++a;

    printf("%d", t1);
    printf("%d", t2);

    return 0;
}