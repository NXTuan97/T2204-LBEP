#include<stdio.h>
int main(){
	int n;
	int arry[n];
	int max;
	int sum=0;
	int dem=1;
	printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap mang: \n");
    for(int i=0; i<n; i++){
    	scanf("%d", &arry[i]);
	}
	for(int i =0; i<n; i++){
		if(arry[i]>0 && arry[i+1]>0){
			dem++;
			sum = sum + arry[i] + arry[i+1];
		}
	}
	if(dem>0 && sum>max){
		max = sum;
		printf("tong chuoi duong lon nhat la %d", sum);
	}
	if(dem==0){
		printf("Khong cho chuoi duong");
	}
}
