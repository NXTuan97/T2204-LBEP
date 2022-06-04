#include<stdio.h>
int main(){
    int n;
    do{
    	printf("Nhap 3 so: ");
    	scanf("%d",&n);
    	if(n<99){
    		printf("Nhap lai: \n");
    
		}else if("n>999"){
			printf("Nhap lai: \n");
		}
	
	}
	if(n>99 || n<999){
	printf("so %d can doc la: ",n);
}
	while(n!=0){
	tmp = (tmp*10)+(n%10);
	n/10;
}
while(tmp!=0){
	switch(tmp%10){
		case 0:
			printf("Zero");
			break;
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 10:
			printf("Zero");
			break;
	}
	tmp=tmp/10;
}
