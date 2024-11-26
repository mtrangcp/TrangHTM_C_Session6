#include <stdio.h>

int checkYear(int n){
	int i;
	if ( ( n % 4 == 0 && n % 100 != 0) || ( n % 400 == 0)){
		return 1;
	}
	
	return 0;
}


int main(){
	int month, year;
	
	printf("Nhap nam: ");
	scanf("%d", &year);
	printf("Nhap thang: ");
	scanf("%d", &month);
	
	if ( year >= 1 ){
    	printf("Nam hop le!\n");
    	
    	if ( month >= 1 && month <= 12 ){
	    	printf("Thang hop le!\n");
	    	
	    	if (checkYear(year) == 1 && month == 2 ){
	    		printf("So ngay trong thang va nam da nhap la: 29!\n");
			}else if (checkYear(year) == 0 && month == 2 ){
				printf("So ngay trong thang va nam da nhap la: 28!\n");
			}else if ( month == 4 || month == 6 || month == 9 || month == 11 ){
				printf("So ngay trong thang va nam da nhap la: 30!\n");
			}else{
				printf("So ngay trong thang va nam da nhap la: 31!\n");
			}
	    
		}else {
			printf("Thang khong hop le!\n");
		}
    
	}else {
		printf("Nam khong hop le!\n");
	}
	
	return 0;
}
