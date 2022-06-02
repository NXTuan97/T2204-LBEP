#include<stdio.h>
int main(){
	int n;
	int i = 1;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(i<n){
		if(n%i==0){
		sum = sum + i;
	}
	i++;
	}
	if(sum == n){
		printf("%d la so hoan hao", n);
	}else{
		printf("%d khong la so hoan hao", n);
	}
	return 0;
}
