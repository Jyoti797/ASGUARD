#include <stdio.h>
// NOT gate
void main()
{
    int i;
    int result;
    int a[2] = {0, 1};
    for (i = 0; i < 2; i++)
    {
        if (a[i] == 0)
            result = 1;
        else if (a[i] == 1)
            result = 0;
        printf("%d NOR = %d\n", a[i], result);
    }
}