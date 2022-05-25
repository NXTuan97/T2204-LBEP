#include<stdio.h>
int main(){
	int n;
	int arry[n];
	int dem =0;
	int max=0;
	printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap mang: \n");
    for(int i=0; i<n; i++){
    	scanf("%d", &arry[i]);
	}
	for(int i =0; i<n; i++){
		if(arry[i]>0){
			dem++;
			if(dem>max){
				max = dem;
			}else{
				
			}
		}else{
			dem=0;
		}
	}
			printf("chuoi duong lon nhat la %d", max);
}
