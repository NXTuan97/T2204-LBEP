#include<stdio.h>
#include<string.h>
int main(){
	char arrs[10][100];

	printf("Nhap chuoi: \n");
	for(int i=0; i<10;i++){
	
		scanf("%s",arrs[i]);
	}
	char s_max[100];
	strcpy(s_max,arrs[0]);
	for(int  i=0;i<10;i++){
		if(strcmp(arrs[i],s_max)<0){
			strcpy(s_max,arrs[i]);
		}
	} 
	printf("chuoi can tim: %s\n",s_max);
return 0;
}

