#include<stdio.h>
#include<math.h>

int main(){
    float battery, temp, current;
    printf("Nhap nhiet do pin "); scanf("%f", &temp); fflush(stdin);
    printf("------------------------------\n");
    printf("Nhap phan tram pin "); scanf("%f", &battery); fflush(stdin);
    printf("------------------------------\n");
    printf("Nhap dien ap "); scanf("%f", &current); fflush(stdin);
    printf("------------THONG-BAO----------\n");
    if(temp < 60){
        if(battery >= 100){
            printf("Ngat sac - Day pin !!!");
        }else if(battery >= 80){
            if(current > 20){
                printf("Giam dong sac(trickle charge)");
            }else {
                printf("Sac binh thuong");
            }
        }else if(battery <= 10 ){
            printf("Sac nhanh (quick charge)");
        }
        else if(battery > 10){
            printf("Sac binh thuong");
        }
    }
    else{
        printf("Dung sac - Qua nhiet");
    }
    return 0;
}