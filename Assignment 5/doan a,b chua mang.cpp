#include<stdio.h>
#include<math.h>
int main (){
	int n; 
	int min;
	int max=0;
	int arr[n];
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	printf("Nhap mang: \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	printf("Doan [a,b] can tim la: %d,%d", min,max);
}
