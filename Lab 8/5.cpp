#include<stdio.h>
#include<string.h>
int main(){
	char s[10][100];
	char s_max[100];
	printf("Nhap chuoi: \n");
	for(int i=0; i<10;i++){
	
		scanf("%s",s[i]);
	}
	strcpy(s_max,s[0]);
	for(int  i=0;i<10;i++){
		if(strlen(s_max)<strlen(s[i])){
			strcpy(s_max,s[i]);
		}
	} 
	printf("chuoi can tim: %s\n",s_max);
return 0;
}

