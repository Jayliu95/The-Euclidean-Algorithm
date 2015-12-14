#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void makeCayleTable(int arg1){
	/*modular multiplication*/
	printf("x | ");
	int i;
	int j;
	for(i = 1; i < arg1; i++){
	if(i<10){
			printf("0%d| ",i);
		}else{
			printf("%d| ",i);
		}
	}
	printf("\n");
	printf("---------------------------------------------------------------------------------------------\n");

	for(i = 1; i<arg1; i++){
		if(i<10){
			printf("0%d| ",i);
		}else{
			printf("%d| ",i);
		}
		for(j = 1; j<arg1; j++){
			if(((i*j)%arg1)<10){
				printf("0%d| ", (i*j)%arg1);
			}else{
				printf("%d| ", (i*j)%arg1);
			}
		}
		printf("\n");
	}

}


int main(int argc, char *argv[]){

	int a;
	a = atoi(argv[1]);
	makeCayleTable(a);

}