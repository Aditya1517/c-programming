#include <stdio.h>

int main()
{
    int a,b;
    printf("Entre the number a\n");
    scanf("%d", &a);

     printf("Entre the number b\n");
    scanf("%d", &b);

    printf("a*b=%d\n" , a*b);
    printf("a*[b+1]=%d\n" , a*(b+1));

    printf("The table is %d\n", a*b);

    return 0;
}
