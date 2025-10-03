#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//AUTO DRIVING

int main(){
    bool obstacle;
    int speed, battery, temp;
    printf("Does have any obstacles (1) True / (0) False ? ");
    scanf("%d", &temp);
    fflush(stdin);
    printf("*********************\n");
    printf("Enter your speed ");
    scanf("%d", &speed);
    fflush(stdin);
    printf("*********************\n");
    printf("Please eneter your battery ");
    scanf("%d", &battery);

    obstacle = temp;

    if(obstacle){
        if(speed > 20){
            printf("Phanh gap ");
        }else{
            printf("Vanh hanh binh thuong");
        }
    }else{
        if(speed >= 120){
            printf("Nguy hiem - Qua toc do");
        }else if( speed > 0 && speed < 120){
            if(battery < 5){
                printf("Dung xe - Pin can");
            }
            else if(battery < 15){
                if(speed > 50){
                    printf("Giam toc do do pin yeu");
                }
            }
        }
        printf("Vanh hanh binh thuong");
    }

    return 0;
}
