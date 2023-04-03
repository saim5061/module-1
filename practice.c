#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);
    printf("value of c: %d\n", c);

    float avearage = (a + b + c)/ 3;
    printf("Average of a, b and c= %0.2f",avearage);
    return 0;
}
// value of a: 10
// value of b: 20
// value of c: 30
// Average of a, b and c= 20.00