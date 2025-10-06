#include <stdio.h>
    
    int main(){
    	float speed;
    	printf("Chon toc do mong muon: ");
    	scanf("%f", &speed);
    
    	unsigned int battery;
    	printf("Chon phan tram pin hien tai: ");
    	scanf("%d", &battery);
    	int obstacle;
    	printf("Chon che do thu thach: ");
    	scanf("%d", &obstacle);
      
      if((speed > 20) && (obstacle = 1)){
      	printf("Phanh gap!");
	  }
	  else if((battery < 15) && (speed > 50)){
	  	printf("Giam toc do do pin yeu!");
	  }
	  else if(battery < 5){
	  	printf("Dung xe - Pin can!");
	  }
	  else if(speed > 120){
	  	printf("Nguy hiem, qua toc do!");
	  }
	  else {
	  	printf("Van hanh binh thuong!");
	  }
	  return 0;
	}
