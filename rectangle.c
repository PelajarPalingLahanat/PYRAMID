//TEMPLATE
#include <stdio.h>
#define ARR_SIZE 10
#define LEN_ARR(x) sizeof(x) / sizeof(x[0])

void func(){

}

int main(){
	//CREATE A RECTANGLE
	int a,b;
	printf("Enter width : ");
	scanf("%d",&a);
	printf("Enter height : ");
	scanf("%d",&b);
	printf("\n\n");
	for(int i = 0; i < b;i++){
		printf("\t\t");
		for(int j = 0; j < 2 * a;j++ ){
			printf("%c",219);
		}
		printf("\n");
	}
	printf("\n\nWidth : %d unit\nHeight : %d unit\nArea : %d unit",a,b,a * b);

}
