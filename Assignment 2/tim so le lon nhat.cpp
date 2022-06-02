#include<stdio.h>

int main(){
	int n;
	int y=0;
	int max=0;

	printf("nhap n: ");
	scanf("%d", &n);
	while(y<n){
		if (y%2==0 && y%3==0){
			printf("%d ",y);
			max=y;
		}
	y++;
  }	
  printf("so thich hop la : %d", max);
}
