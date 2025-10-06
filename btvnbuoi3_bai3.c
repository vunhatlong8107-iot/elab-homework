#include <stdio.h>

    int main(){
    	unsigned int battery;
    	printf("Chon luong pin hien tai: ");
    	scanf("%d", &battery);
    	float temp;
    	printf("Chon nhiet do hien tai: ");
    	scanf("%f", &temp);
    	float current;
    	printf("Chon cuong do dong sac: ");
    	scanf("%f", &current);
    	
    	if(battery >= 100){
    		printf("Ngat sac - day pin");
		}
		else if((battery >= 80) && (current > 20)){
			printf("Giam dong sac");
		}
		else if(temp > 60){
			printf("Dung sac - Qua nhiet");
		}
		else if(battery < 10){
			printf("Sac nhanh");
		}
		else { 
		    printf("Sac binh thuong");
		}
		return 0;
	}
