#include <stdio.h>
#include <math.h>
int main(){

	float x[7], y[7];
	float sx,sy,ssx,sxy =0,a,b,det;
	int i,j;

	printf("Enter points :");
	for(i=0;i<7;i++){
		printf("enter %dth point: \n",i+1);
		scanf("%f %f",&x[i],&y[i]);
		}
		for(j=0;j<7;j++){
		sx+=x[j];
		sy+=y[j];
		ssx+=(x[j]*x[j]);
		sxy+=(x[j]*y[j]);
		}
	printf("%f  %f  %f  %f\n",sx,sy,ssx,sxy);
	det=pow(sx,2)-(7*ssx);
	printf("%f\n",det);
	if(det==0)
		printf("Not possible");
	else{
	a=((sx*sy)-7*sxy)/det;
	b=((-ssx*sy)+(sx*sxy))/det;
	printf("Slope is =   %f\n",a);
	printf("Intercept is =   %f",b);
	}
	return 0;
}