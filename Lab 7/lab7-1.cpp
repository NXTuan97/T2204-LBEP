#include<stdio.h>
int luyThua(int x, int y){
	int result=1;
    for(int i=1; i<=y; i++){
    	result = result * x;
	}
	return result;
}
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int y;
	printf("Nhap y: ");
	scanf("%d",&y);
	int z = luyThua(x,y);
	printf("Ket qua la: %d",z);
}
