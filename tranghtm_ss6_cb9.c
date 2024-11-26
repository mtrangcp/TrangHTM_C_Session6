#include <stdio.h>

int main(){

	int so1, so2, so3, check;
	for ( int i = 100; i<= 999; i++){
		so3 = i % 10;
		so2 = ( i % 100 )/10;
		so1 = i / 100;
		
		check = so1*so1*so1 + so2*so2*so2 + so3*so3*so3;
		
		if ( check == i ){
			printf("\nso: %d", check);
		}
	}

	return 0;
}
