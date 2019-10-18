#include <stdio.h>

int main()
{
    int a[100000];
    int b[100000];
    int c[100000000];
    int n,i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
     for(j=0;j<n;j++)
    {
        for (i=0;i<n;i++)
        {
            if (i/2 == 0 && j/2 ==0)
            {
                c[j] = a[i];
            }
            else{
                c[j] = b[i];
            }
        }
        printf("%d",c[0]);
    }
    return 0;
}
