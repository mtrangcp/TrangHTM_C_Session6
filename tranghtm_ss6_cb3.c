#include <stdio.h>

int main(){
	
	int pass = 123, input;
	
	printf("Nhap pass: ");
	scanf("%d", &input);
	
	if ( input == pass ){
		printf("Dung pass!");
	}else{
		printf("Sai pass!");
	}
	
	return 0;
}
