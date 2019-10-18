#include <stdio.h>

int main()
{
    int N=0;
    int i=0,j=0;
    int Pfactor[300]={0};
    int k=0,counter=0,p=0,q=0;
    int prime[100]={0};
    int x=0,y=1;

    scanf("%d",&N);

    if(N<2||N>100000000)
    {
        return 0;
    }

    for(i=2; i<=N; i++)
    {
        while (N%i==0)
        {
            Pfactor[j]=i;
            N=N/i;
            j++;
        }
    }

    while(1)
    {
        for (;k<j;k++)
        {
            counter=counter+1;
            if(Pfactor[k] != Pfactor[k+1])
            {
               prime[p+1] = counter;
               p++;
            }
        }
        if(Pfactor[k] == 0)
            break;
    }

    for(x=0;x<j;x++)
    {
        if (Pfactor[x] != Pfactor[x+1])
        {
            printf("%d",Pfactor[x]);

            q = prime[y] - prime[y-1];

            printf(" %d\n",q);
            y++;

        }
    }
    return 0;
}
