#include<stdio.h>

int main(){
	int k=5, i;
	printf("Nhap i: ");
	scanf("%d", &i);
	for(i=0;i<k;i++){
		if(i%2==1){
			k=4;
		}
		for(int j=0;j<k;j++){
			printf("*");
		}
		k=5;
		printf("\n");
	}
}
