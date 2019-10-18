#include <stdio.h>
#include <math.h>
int main()
{
	double x1,y1,x2,y2,x,y,a,b;
	scanf("%lf%lf",&x1,&y1);
	scanf("%lf%lf",&x2,&y2);
	scanf("%lf%lf",&x,&y);
	a=(y1-y2)*(x-x2);
	b=(x1-x2)*(y-y2);
	if(fabs( a - b ) < 1e-6)
	{
		printf("Collinear");
	}
	else
	{
		printf("General Position");
	}
	return 0;
}
