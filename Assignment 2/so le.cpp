#include<stdio.h>

int main(){
	int n;
	int y=0;
	printf("nhap n: ");
	scanf("%d", &n);
	while(y<n){
		if (y%2==1){
			printf("%d ",y);
		}
		y++;	
	}
	return 0;	
}
