#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Nhap chuoi ban dau: \n");
	scanf("%s",s);
	int kt = strlen(s);
	for(int i=0; i<kt/2; i++){
			char tmp=s[i];
		   s[i]=s[kt-1-i];
		   s[kt-1-i]=tmp;
	}
	printf("Chuoi sau khi doi: %s",s);
}
