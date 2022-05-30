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
int ucln(int a, int b){
	int x=0;
	for(int i =1; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0){
			x=i;
		}
	}
	return x;
}
int bcnn(int a, int b){
	int y = (a*b) / ucln(a,b);
	return y;
}

int bcnnArray(int n, int arr[]){
	int y = arr[0];
	for(int i=0; i<n; i++){
		y = bcnn(y,arr[i]);
	}
	return y;
}
int main(){
    int a[5];
    nhapMang(5,a);
    inMang(5,a);
	int y = bcnnArray(5,a);
	printf("%d",y);
}
