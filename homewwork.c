#include<stdio.h>

int main(){
    float speed;
    float R;
    float pi = 3.1415;
    //Nhập tốc độ km/h -> m/s
    printf("Speed(km/h): ");
    scanf("%f", &speed);
    speed = speed/3.6;
    printf("=> m/s: %.3f \n", speed);

    //Tính chu vi và diện tích hình tròn
    printf("R: ");
    scanf("%f", &R);
    float area = pi*R*R;
    float circuit = 2*pi*R;
    printf("C= %f, S= %f \n", area, circuit);

    //Tính chiều rộng hình chữ nhật có diện tích 30, chiều dài là 4
    float width = 30/2-4;
    printf("width(int): %.0f, width: %f \n", width, width);
    return 0;
}