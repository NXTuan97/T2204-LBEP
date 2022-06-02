#include<stdio.h>
int main(){
	float n;
	float sum = 0;
	float i = 1;
	printf("Nhap n: ");
	scanf("%f", &n);
	while(i<=n){
	sum = sum + 1/i;
	i++;
	}
	printf("ket qua la %f", sum);
	return 0;
}
