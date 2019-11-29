#include <stdio.h>

int main(){
	int n[5];
	int ig[5] = {0,0,0,0,0};

	int pass;

	
		pass = 0;
		
		fflush(stdin);
		scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);
		for (int i = 0; i < 5; ++i){
			if (n[i] < 1 || n[i] > 100){
				pass = 1;
			}
		}
	if (pass == 1){
		
	}else{

		for(int i = 0; i < 5; ++i){
			for (int j = 0; j < 5; ++j){
				if(n[i] == n[j]){
					ig[i]++;
				}
			}
		}

		int max = 0;

		for (int i = 0; i < 4; ++i){
			if(max < ig[i])
				max = ig[i];
		}

		switch(max){
			case 5:
				printf("Identicamente iguales\n"); 
				break;
			case 4:
				printf("Muy iguales\n"); 
				break;
			case 3:
				printf("Iguales\n");
				break;
			case 2:
				printf("Diferentes\n");
				break;
			case 1: 
				printf("Muy diferentes\n");
				break;
		}
	}
return 0;
}