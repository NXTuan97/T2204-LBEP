#include<stdio.h>
int main(){
	int n;
	int sum = 0;
	int i = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(i<=n){
		sum = sum +i;
		i++;
	}
	printf("ket qua la %d", sum);
	return 0;
}

