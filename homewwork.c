#include<stdio.h>
#include<math.h>
#define PI 3.142
int main(){
    float km_h;
    printf("Nhap toc do cua ban (km/h) ");
    scanf("%f", &km_h);
    fflush(stdin);
    float m_s = km_h / 3.6;
    printf("Toc do ban theo km/h la %.3f km/h\n", km_h);
    printf("Toc do ban theo m/s la %.3f m/s\n", m_s);
    fflush(stdout);
    printf("************************************************************************\n");
    
    float r;
    printf("Nhap ban kinh hinh tron ");
    scanf("%f", &r);
    fflush(stdin);
    float C = 2 * PI * r;
    float S = PI * r * r;
    printf("Hinh tron voi ban kinh %.3f co chu vi la %.3f va dien tich %.3f\n", r, C, S);
    fflush(stdout);

    printf("************************************************************************\n");
   
    float dai = 4;
    float rong = 30/dai;
    float rong2 = floor(rong);
    printf("Chieu rong la %.2f va lam tron la %.0f", rong, rong2);
    
    return 0;
}