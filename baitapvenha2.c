#include<stdio.h>
int main() {
    int mode ; 
    float battery;
    printf("nhap gia tri cua mode : ");
    scanf("%d",&mode);
    printf("nhap phan tram pin : ");
    scanf("%f",&battery);
    switch(mode){
        case(0) :{
            printf("Standby");
            break;
        }
        case(1) :{
            printf("Text");
            break;
        }     
        case(2) :{
            printf("Video");
            break;
        }
        case(3) :{
            printf("Gaming");
            break;
        }
        case(4) :{
            if(battery>=80){
                printf("pin cao khong can tiet kiem pin");
            }
            else{
            printf("Power Saving");
            }
            break;
        }
        case(5) :{
            if(battery<=30){
                printf("Khong the vao HIGH PERFORMANCE-pin yeu");
            }
            else{
            printf("High Performance");
           
            }
              break;
        }
        default : 
            printf("gia tri khong hop le");            
             }   
        }