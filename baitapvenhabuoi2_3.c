#include<stdio.h>
 int main (){
    float battery,temp,current;
    printf("nhap gia tri pin : \n");
    scanf("%f",&battery);
    printf("nhap gia tri nhiet do : \n");
    scanf("%f",&temp);
    printf("nhap gia tri cuong do dong dien : \n");
    scanf("%f",&current);
    
    if((battery>=100)){
        printf("Dung sac - day pin ");
    }
    else if((battery>=80)&&(current>20)){
        printf("Giam dong sac (trickle charge)");
    }
    else if((temp>60)){
        printf("Dung sac - Qua nhiet ");
    }
    else if((battery<10)){
        printf("Sac nhanh - (flash charge)");
    }
    else {
        printf("sac binh thuong");
    }
        return 0;
 }