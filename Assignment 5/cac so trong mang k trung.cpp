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
	}
	int i =0; 

	while(i<n){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
		bool flag = false;
		for(int j = 0; j<= i-1; j++){
			if(arr[i] == arr[j]){
				
				flag = true; 
				break;
			}
		}
    if(flag= false){

	}else{
		printf("So nay da co trong danh sach, vui long nhap lai\n");
	}
  i++;
}
}
	
	

