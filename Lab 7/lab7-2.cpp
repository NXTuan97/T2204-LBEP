#include<stdio.h>
void nhapMang(int n, int arr[]){
	printf("Nhap mang:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
}
void inMang(int n, int arr[]){
	printf("In mang:\n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
bool kiemtrasonguyento(int n){
	if(n<2){
		return false;
	}
	if(n==2||n==3){
		return true;
	}
	for(int i=2; i<=n/2; i++){
        if(n%i==0){
			return false;
		}
	}
	return true;
}
int soNguyenToMin(int n, int arr[]){
	int max=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int x = max;
	for(int j=1;;j++){
		x++;
		if(kiemtrasonguyento(x)==true){
	        return x;
		}
	}
}
int main(){
	int arr[5];
	nhapMang(5,arr);
	inMang(5,arr);
	int nt =soNguyenToMin(5,arr);
	printf("Ket qua la: %d",nt);
}

