#include <stdio.h>
#include <math.h>

int main(){
	int num, reNum;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &num);
	
	if ( num == 0 ){
		printf("So 0 la boi cua moi so nguyen khac 0!");
		
	}else{
		reNum = abs(num);
		printf("Cac uoc cua %d la: \n", num);
	
		for ( int i = 1; i<= reNum; i++){
			if ( num % i == 0 ){
				printf(" %d\t -%d\t", i, i);
			}
		}
	}
	
	return 0;
}
