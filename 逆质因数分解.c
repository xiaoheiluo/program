#include <stdio.h>
#include <math.h>

int main()
{
    int i,k;
    int A[20][2];
    int output = 1,sum = 0;

    scanf("%d",&k);

    for (int i = 0;i < k;i++)
    {
        scanf("%d%d",&A[i][0],&A[i][1]);
    }
    for (int i = 0;i < k;i++)
    {
        sum = pow(A[i][0], A[i][1]);

        output *= sum;

    }

    printf("%d",output);

    return 0;
}
