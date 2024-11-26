#include <stdio.h>

int main(){
	int sum = 0, num;
	for ( int i = 1 ; i<=5; i++){
		printf("Nhap so thu %d: ", i);
		scanf("%d", &num);
		
		if ( num % 2 != 0){
			sum += num;
		}
	}
	
	printf("Tong cac so le la: %d", sum);
	
	return 0;
}
