#include<stdio.h>
#include<string.h>
char s[100];
void sortString(char s[]){
	printf("Nhap chuoi ki tu: %s",s);
	scanf("%s",s);
}
void aphabet(char s[100]){
	int size = strlen(s);
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if( s[i]>s[j]){
			char tmp = s[i];
			s[i]=s[j];
			s[j]=tmp;
		}
	}
}
}

int main(){
	sortString(s);
	aphabet(s);
	printf("Chuoi sau khi doi la: %s",s);
}
