#include<stdio.h>
#include<math.h>
int main (){
	int n; 
	int min=0;
	int max=0;
	int arr[n];
	int x;
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
	if(abs(max)>=abs(min)){
		printf("So doan tim la %d, %d", max,-max);
	}else
	printf("So doan tim la: %d, %d", min,-min);	
}
