#include<stdio.h>
#include<stdlib.h>
int main (){
	int x;
	int n; 
	int arr[n];
	printf("Nhap x: ");
	scanf("%d",&x);
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	printf("Nhap mang: \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int khoangcach, max = abs(arr[0]-x), i=0;
	while(i<n){
		khoangcach = abs(arr[i]-x);
		if(khoangcach > max){
			max = khoangcach;
		}
			i++;    
    	}
	for(int i=0; i<n; i++){
		if(abs(arr[i]-x) == max){ 
		printf("\n so xa nhat: %d ", arr[i]); 
	 }
}
 

}
