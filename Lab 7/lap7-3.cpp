#include<stdio.h>
#include<math.h>
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
int minOfArray(int n, int arr[]){
	int min = abs(arr[0]);
	for(int i=0; i<n; i++){
		if(abs(arr[i])< min){
			min=abs(arr[i]);
		}
	}
	return min;
}
bool kt(int n, int arr[],int x){
	for(int i=0; i<n; i++){
		if(abs(arr[i])%x!=0){
			return false;
		}
	}
	return true;
}
int ucln(int n, int arr[]){
	int a[n];
	nhapMang(n,a);
	inMang(n,a);
	int m = minOfArray(n,a);
	for(int i=m; i>=1;i--){
		if(kt(n,a,i)==true){
			return i;
		}
	}
	return -1;
	
}
int main(){
	int a[5];
	int x = ucln(5,a);
	printf("%d",x);
}
