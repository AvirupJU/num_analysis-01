#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

float fx(float x){
	return sin(x);
}
 int main(){
 	float a,b,h,sum=0;
 	int n,i ;
 	printf("Enter limits of integration");
 	scanf("%f%f",&a,&b);
 	printf("enter no of steps");
 	scanf("%d",&n);
 	a=a/57.4;
 	b=b/57.4;
 	h=abs(b-a)/n;
 	printf("%f",h);
 	for(i=0;i<=n;i++){
 		sum+= fx(a+i*h); 
 	}
 	sum=(h*sum)-(h*(fx(a)+fx(b)))/2;
 	printf("The integral evaluates to =  ",sum);

 	return 0;
 }