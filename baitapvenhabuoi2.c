#include<stdio.h>
int main (){
    float speed , battery, obstacle;
    printf("nhap gia tri van toc :\n");
    scanf("%f",&speed);
    printf("nhap gia tri pin :\n ");
    scanf("%f",&battery);
    printf("nhin xem phia truoc co vat can khong neu co tra ve 1 neu khong tra ve 0 \n");
    scanf("%f",&obstacle);

    if((obstacle==1)&&(speed>20)){
        printf("Phanh gap ");
    }
    else if((battery<15)&&(speed>50)){
        printf("Giam toc do - Do pin yeu");
    }
    else if((battery<5)){
        printf("Dung xe - Pin can");
    }
    else if((speed>120)){
        printf("Nguy hiem - Qua toc đo ");
    }
    else{
        printf("Van hanh binh thuong");
    }
    return 0;
}