#include<stdio.h>
float lagelangri(double x[],double y[],double xx,double n)
{
    int i,j;
    int *a,yy=0;
    *a=double [n];
    for(i=0;i<=n-1;i++)
    {
        a[i]=y[i];
        for(j=0;j<=n-1;j++)
            if(j!=i)a[i]*=(xx-x[j])/(x[i]-x[j]);

        yy+=a[i];
    }
    return yy;
}

void main()
{
    double x[4]={0.3,0.4,0.5,0.6};
    double y[5]={1.2222,1.2681,1.3033,1.32293};
    double xx=0.45;
	double yy;
    yy=lagelangri(x,y,xx,4);
    printf("x=%lf,y=%lf\n",xx,yy);
}