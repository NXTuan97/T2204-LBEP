#include<stdio.h>
#include<math.h>
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
	int	min = abs(arr[0] - x);
	int khoangcach;
	for(int i=1; i<n; i++){
	    khoangcach = abs(arr[i] - x);
		if(khoangcach < min){
			min = khoangcach;
		}

	}
	for(int i=0;i<n;i++){
		if(abs(arr[i] - x ) == min){
			printf("So can tim la %d\n", arr[i]);
		}
	}
	return 0;
}
		
