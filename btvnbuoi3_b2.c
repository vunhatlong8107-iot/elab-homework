#include <stdio.h>

    int main(){
    	int Display_Mode;
    	printf("Chon che do mong muon: ");
    	scanf("%d", &Display_Mode);
    	unsigned int battery;
    	printf("Chon luong pin hien tai: ");
    	scanf("%d", &battery);
    	
    	switch(Display_Mode){
    		
    		case 0: {
    			printf("Standby\n");
				break;
			}
			case 1: {
				printf("Text\n");
				break;
			}
			case 2: {
				printf("Video\n");
				break;
			}
			case 3: {
				printf("Gaming\n");
				break;
			}
			case 4: {
				printf("Power saving\n");
				break;
			}
			case 5: {
				printf("High performance\n");
				break;
			}
			default: {
				printf("Che do khong hop le\n");
			}}
		    if ((Display_Mode = 5) && (battery < 30.0)){
		    	printf("Hien tai khong the vao High Performance - Pin yeu");
			}	
			else if ((Display_Mode = 4) && (battery > 80.0)){
				printf("Pin cao - Khong can tiet kiem dien");
			}
			else {
				printf("Hoat dong binh thuong");
			}
		return 0;
	}
