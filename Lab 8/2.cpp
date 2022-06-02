#include<stdio.h>
#include<string.h>
int main(){
	char s1[100], s2[100];
	printf("Nhap s1: \n");
	scanf("%s", s1);
	printf("Nhap s2: \n");
	scanf("%s",s2);
	int lenght1 = strlen(s1);
	int lenght2 = strlen(s2);
	int lenght = lenght1;
	if(lenght1 < lenght2){
		lenght=lenght2;
	}
	for(int i=0; i<lenght; i++){
		if(s1[i]-s2[i]<0){
			printf("s1 dung truoc s2");
			break;
		}else if(s1[i]-s2[i]>0){
			printf("s1 dung sau s2");
			break;
		}
	}

}
