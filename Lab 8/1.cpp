#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[100];
	printf("Nhap chuoi s1: \n");
	scanf("%s",s1);
	printf("Nhap chuoi s2: \n");
	scanf("%s",s2);
	int kt1=strlen(s1);
	int kt2=strlen(s2);
	if(kt1<kt2){
		printf("s1 small than s2");
	}else if(kt1==kt2){
		printf("s1 same as s2");
	}else{
		printf("s1 greater than s2");
	}
}
