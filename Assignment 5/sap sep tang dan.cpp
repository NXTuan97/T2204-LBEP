#include<stdio.h>
int main (){
	int n; 
	int arr[n];
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	printf("Nhap mang: \n");
	for(int i=0; i<n; i++){
	scanf("%d", &arr[i]);
		for(int j=0;j<n-1;j++){
			for(int k=0; k<n-j-1;k++){
				if(arr[k] > arr[k+1]){
				int tmp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=tmp;
				}
			}		
		}
	}
		
}
