#include <stdio.h>

int main(){
	int num, j = 1;
	
	printf(" Nhap so nguyen bat ki: ");
	scanf("%d", &num);
	
	if ( num <= 1 ){
		printf("\n %d khong phai so nguyen to!", num);
		
	}else{
		for ( int i = 2; i< num; i++){
			if ( num % i == 0){
				j = 0;
				break;
			}
		}
		
		if ( j == 1 ){
			printf("\n %d la so nguyen to!", num);
		}else{
			printf("\n %d khong phai so nguyen to!", num);
		}
	}
	
	return 0;
}
