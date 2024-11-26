#include <stdio.h>

int main(){
	int day, month;
	printf(" Nhap ngay thang: ");
	scanf("%d %d", &day, &month);
	
	if ( month>0 && month<13 ){
		if ( day > 0 && day < 32){
			if ( (day >= 21 && month == 3) || (day <= 20 && month == 4) ){
				printf("\nCung Bach Duong");
				
			}else if ( (day >= 21 && month == 4) || (day <= 20 && month == 5) ){
				printf("\nCung Kim Nguu");
				
			}else if ( (day >= 21 && month == 5) || (day <= 21 && month == 6) ){
				printf("\nCung Song Tu");
				
			}else if ( (day >= 22 && month == 6) || (day <= 22 && month == 7) ){
				printf("\nCung Cu Giai");
				
			}else if ( (day >= 23 && month == 7) || (day <= 22 && month == 8) ){
				printf("\nCung Su Tu");
				
			}else if ( (day >= 23 && month == 8) || (day <= 22 && month == 9) ){
				printf("\nCung Xu Nu");
				
			}else if ( (day >= 23 && month == 9) || (day <= 23 && month == 10) ){
				printf("\nCung Thien Binh");
				
			}else if ( (day >= 24 && month == 10) || (day <= 22 && month == 11) ){
				printf("\nCung Bo Cap");
				
			}else if ( (day >= 23 && month == 11) || (day <= 21 && month == 12) ){
				printf("\nCung Nhan Ma");
				
			}else if ( (day >= 22 && month == 12) || (day <= 19 && month == 1) ){
				printf("\nCung Ma Ket");
				
			}else if ( (day >= 20 && month == 1) || (day <= 18 && month == 2) ){
				printf("\nCung Bao Binh");
				
			}else {
				printf("\nCung Song Ngu");
			}
			
		}else{
			printf("Ngay k hop le!: ");
		}
	}else{
		printf("Thang k hop le!: ");
	}
	
	return 0;
}
