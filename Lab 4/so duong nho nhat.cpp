#include<stdio.h>
int main(){
	int n;
	int arry[n];
	int min;
	printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap mang: \n");
    for(int i=0; i<n; i++){
    	scanf("%d", &arry[i]);
	}		 
	min = arry[0];
	for(int i=0; i<n; i++){
		if(arry[i]<min && arry[i]>0){
			min = arry[i];
		}
	}
			printf("So nguyen duong nho nhat la %d", min);
return 0;
}
	
