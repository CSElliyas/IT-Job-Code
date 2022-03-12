#include <stdio.h>
int main()
{
    union ver{
        int a, b;
    }
    union ver v;
    v.a = 10;
    v.b = 20;
    printf("%d\n", v.a);
    return 0;
}
