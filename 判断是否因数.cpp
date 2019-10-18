#include <stdio.h>
int mian()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%b!=0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}
