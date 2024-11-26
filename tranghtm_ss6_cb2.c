#include <stdio.h>

int main(){
	
	int countEven = 0, countOdd = 0, num;
	
	for ( int i = 1; i<= 5; i++){
		printf("Nhap so thu %d: ", i);
		scanf("%d", &num);
		
		if ( num % 2 == 0){
			countEven++;
		}else{
			countOdd++;
		}
	}
	
	printf("\nSo luong so chan la: %d", countEven);
	printf("\nSo luong so le la: %d", countOdd);
	
	return 0;
}
