#include <stdio.h>
#include <math.h>

float f(float x , float y){
	float result;
	result = (10*x)+(y*y);
	return result;
}

int main(){
	float h,x0,y0,x1,y1,k1,k2,k3,k4,k;

	printf("Enter base values and step size :");
	scanf("%f%f%f",&x0,&y0,&h);
	printf("Enter the x value :");
	scanf("%f",&x1);
	//printf("F.");
	while(x0<x1){
		k1= h*f(x0,y0);
		k2=h*f((x0+h/2),(y0+k1/2));
		k3=h*f((x0+h/2),(y0+k2/2));
		k4=h*f((x0+h),(y0+k3));
		k=(k1+2*k2+2*k3+k4)/6.0;
		y1=y0+k;
		printf("%f            %f\n",x0,y1);
		x0=x0+h;
		y0=y1;
		y1=0;
	}
	return 0;
}