#include<stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    float b;
    b=a*1000;
    b/=3600;
    printf("km/h:%.3f\n",a);
    printf("m/s:%.3f",b);
    return 0;
}