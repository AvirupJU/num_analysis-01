#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main(){
    float v;
    int i,j;
    float term,sum=0;
    
    int X[5];
    int Y[5];
    for(i=0;i<5;i++){
        printf("Enter point\n"); // taking 5 data points
        scanf("%d %d",&X[i],&Y[i]);
        
    }
    printf("Enter the value to be interpolated at :\n");
    scanf("%f",&v);
    for(i=0;i<5;i++){     // Lagrange's algo
        term=Y[i];
        for(j=0;j<5;j++){
            if(j!=i)
                term=term*(v-X[j])/(X[i]-X[j]); // generating term of interpolating polynomial
        }
        sum=sum+term;// calcualting the result
    }
    printf("the value of y at x = %f is %f ",v,sum);
    return 0;
}