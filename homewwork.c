#include<stdio.h>
#include<math.h>

//DISPLAY MODE

int main(){
    int mode, battery;
    printf("**************************\n");
    printf("0. Standby\n");
    printf("1. Text\n");
    printf("2. Video\n");
    printf("3. Gaming\n");
    printf("Nhap mode ban muon chon\n");
    printf("4.Power Saving\n");
    printf("5. High Performance\n");
    printf("**************************\n");
    scanf("%d", mode);
    switch (mode){
    case 0:
        printf("Standby");
        break;
    case 1:
        printf("Text");
        break;
    case 2:
        printf("Video");
        break;
    case 3:
        printf("Game");
        break;
    case 4:
        printf("Power Saving");
        break;
    case 5:
        printf("High Performance");
        break;
    default:
        break;
    }
    return 0;
}
