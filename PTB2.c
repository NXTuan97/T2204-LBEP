#include<stdio.h>
#include<math.h>

int main(){
	int a;
	int b;
	int c;
	printf("Nhap a: \n");
	scanf("%d", &a);
	printf("Nhap b: \n");
	scanf("%d", &b);
	printf("Nhap c: \n");
	scanf("%d", &c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			float x =(float) -c/b;
			printf("Phuong trinh co nghiem x = %f", x);
		}
	}else{
		int delta;
		delta = b*b - 4*a*c;
		float d = sqrt(b*b-4*a*c);
		printf("delta = %d\n", delta);
		if(delta <0){
			printf("Phuong trinh vo nghiem");
		}else if(delta==0){
			float x = (float)-b/(2*a);
			printf("Phuong trinh co nghiem kep x1 = x2 = %f", x);
		}else{
			printf("Phuong trinh co 2 nghiem phan biet x1, x2 la: %f, %f", (-b + d)/ (2 * a), (-b - d)/ (2 * a));
		}
			
	}
	return 0;
}
