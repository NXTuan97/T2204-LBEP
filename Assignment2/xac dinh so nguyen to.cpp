#include<stdio.h>
int main (){
	int n;
	int y=1;
	int number=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(y<=n){
		if(n%y==0){
			number++;
		}
		y++; 
	}
	if(number==2){
		printf("%d la so nguyen to", n);
	}else{
		printf("%d khong la so nguyen to", n);
	}


return 0;
}

