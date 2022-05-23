#include<stdio.h>
int main(){

	int n;
	int arry[n];
	printf("Nhap n = ");
	scanf("%d", &n);
	int x;
	int dem;
	printf("Nhap x: ");
    scanf("%d", &x);
	printf("Nhap mang: \n");
	for(int i=0; i<n; i++){
		scanf("%d", &arry[i]);
	}

	for(int i=0; i<n; i++){		
		if(arry[i]==x){
			dem++;
		}
    }
    if(dem==0){
    	printf("%d khong thuoc mang\n", x);
	}else{
		printf("%d thuoc mang\n", x);
	}
	   
}
