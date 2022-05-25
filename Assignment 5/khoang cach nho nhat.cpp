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
//	int khoangcach;

//	while(i<n){
//		khoangcach = abs(x - arr[i]);
//		if(khoangcach < min){
//			min = khoangcach;
//		}
//		i++;
//	}
//	
	int	min = abs(arr[0] - x);
	int khoangcach;
	for(int i=1; i<n; i++){
	    khoangcach = abs(arr[i] - x);
		printf("khoangcach: %d\n", khoangcach);
		if(khoangcach < min){
			min = khoangcach;
		}
		printf("min: %d\n", min);
	}

	for(int j=0;j<n;j++){
		if(abs(arr[j] - x ) == min){
			printf("%d ", arr[j]);
		}
	}
	return 0;
}
		
