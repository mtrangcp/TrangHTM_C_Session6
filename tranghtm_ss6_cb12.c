#include <stdio.h>

int main(){
	int n, count = 2, f1 = 0, f2 = 1, fn;
	printf(" Nhap so luong so fibonaci muon in: ");
	scanf("%d", &n);
	
	if ( n >= 0){
		if ( n == 0 ){
			printf("\n Khong co so Fibonacci nao can in ra.");
			
		}else if ( n == 1 ){
			printf("\n %d so fibonaci dau tien la: %d", n, f1);
			
		}else if ( n == 2 ){
			printf("\n %d so fibonaci dau tien la: %d\t%d", n, f1, f2);
			
		}else{
			printf("\n %d so fibonaci dau tien la: %d\t%d", n, f1, f2);
			
			while ( count < n ){
				fn = f1 + f2;
				printf("\t%d", fn);
				f1 = f2;
				f2 = fn;
				count++;
			}
			
		}
	
	}else{
		printf("\n Vui long nhap so lon hon 0!");
	}
	
	return 0;
}
