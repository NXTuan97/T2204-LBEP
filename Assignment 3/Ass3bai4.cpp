#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
    for(int i=1; i<=n; i++){
    	for(int k=0; k<=i-1; k++){
	        for(int j=1; j<=i; j++){	
	    	    printf("*");	
		}
			 	printf(" ");
	}
    printf("\n");
}
}
