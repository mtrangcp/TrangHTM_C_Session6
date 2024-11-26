#include <stdio.h>

int check(int num){
	for ( int i = 2; i< num; i++){
		if ( num % i == 0){
			return 0;
		}
	}
	
	return 1;
}

int main(){
	int n, count = 0;
	printf(" Nhap so luong so nguyen to muon in: ");
	scanf("%d", &n);
	
	if ( n >= 0){
		printf("\n %d so nguyen to dau tien la: ", n);
	
		int i = 2;
		while( count < n ){
			if ( check(i) == 1){
				printf("\t%d", i);
				count++;
			}
			i++;
		}
	
	}else{
		printf("\n Vui long nhap so lon hon 0!");
	}
	
	
	return 0;
}
