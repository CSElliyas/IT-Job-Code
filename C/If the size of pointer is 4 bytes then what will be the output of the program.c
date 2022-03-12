#include <stdio.h>
int main()
{
    char *str[] = {"Frogs", "Do", "Not", "Die", "They", "Croak!"};
    printf("%d, %d", sizeof(str));
    strlen(str[0]);
    return 0;
}
