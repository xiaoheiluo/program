#include <stdio.h>

int main()
{
    int N, hour, minute, second;

    scanf("%d",&N);//Enter an integer.
    /*caculate*/
    hour = N / 3600;
    minute = N % 3600 / 60;
    second = N % 3600 % 60;

    printf("%d\n%d\n%d\n",hour, minute, second);

    return 0;
}
