#include <math.h>
#include <stdio.h>

int main()
{
    int i,j,k;
    double p[3][2];

    for(i=0;i<3;i++)
        scanf("%lf%lf", &p[i][0], &p[i][1]);

    double area = 0;
    for(i=0;i<3;i++)
        area += p[i][0] * p[(i+1)%3][1] - p[i][1] * p[(i+1)%3][0];

    double dist = sqrt((p[1][0]-p[2][0])*(p[1][0]-p[2][0]) + (p[1][1]-p[2][1])*(p[1][1]-p[2][1]));

    printf("%f\n", fabs(area/dist));

    return 0;
}
