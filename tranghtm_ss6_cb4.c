#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c;
	printf("Nhap 3 he so cua pt: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if ( a == 0 ){
		if ( b== 0 ){
			if ( c == 0 ){
				printf("Pt co vo so nghiem!");
				
			}else{
				printf("Pt vo nghiem!");
			}
			
		}else{
			float x = -c/b;
			printf("Pt co 1 nghiem: x = %.2f!", x);
		}
		
	}else{
		float delta = b*b - 4*a*c;
		if ( delta < 0 ){
			printf("Pt vo nghiem!");
			
		}else if ( delta == 0 ){
			float x = (-b)/(2*a);
			printf("Pt co nghiem kep: x = %.2f!", x);
			
		}else{
			float x1 = (-b - sqrt(delta))/( 2*a ), x2 = (-b + sqrt(delta))/( 2*a ) ;
			printf("Pt co 2 nghiem: x1 = %.2f  ,  x2 = %.2f !", x1, x2);
		}
	}
	
	return 0;
}
