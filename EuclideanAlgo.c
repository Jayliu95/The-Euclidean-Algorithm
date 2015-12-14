#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeGCD(int a, int b, int counter){

	int q, r; //Quotient and Remainder 
	printf("\x1b[32mStep %d\x1b[0m\n", counter);
	printf("\x1b[33mFinding the GCD of %d, %d\x1b[0m\n", a, b);
	//base cases
	if(a == 0){
		printf("\ta is 0\n");	
		return b;
	}
	printf("\ta is not 0\n");	
	if(b == 0){
		printf("\tb is 0\n");
		return a;
	}
	printf("\tb is not 0\n");
	
	q =(int) a/b;
	r = (int) a%b;
	//GCD(A,B) = GCD(B,R) where R = A%B = B-AQ
	printf("\tA = B*Q+R\n");
	printf("\t%d = %d*%d+%d\n",a,b,q,r);
	printf("\tlet A = B, B = R\n");
	printf("\t==> A = %d, B = %d\n", b,r);
	return computeGCD(b,r,++counter);
}

//commands are as follow
/*
1. prompt commands
2. make cayle table
3. euclidean gcd
4. done
*/
void prompt_commands(){
	printf("Here are the commands: \n");
}

void make_cayle_table(){
	printf("Making cayle...\n");
}

void euclidean_gcd(){
	printf("doing GCD stuff...\n");
}

int handle_commands(){
/*Developer input: We can use fsm and use function pointers to invoke a function based on user input*/
	
	char command[128];

	while(read(1, command, sizeof(command)) > 0){
		if(strcmp(command, "commands") == 0)
			prompt_commands();
		else if(strcmp(command, "cayle") == 0)
			make_cayle_table();
		else if(strcmp(command, "gcd") == 0)
			euclidean_gcd();
		else 
			fprintf(stderr, "\x1b[31mInvalid input at file %d line %d.. Enter <commands> to see the list of commands.",__FILE__, __LINE__);
		memset(&command, 0, sizeof(command));
	}

	return 0; //when done
}

int main(int argc, char *argv[]){
	char command[128];	//input buffer
	//validate input
	if(argc < 3){
		fprintf(stderr, "\x1b[31mInvalid input at file %d line %d. Form: ./EuclideanAlgo arg1 arg2 \x1b[0m \n", __FILE__, __LINE__);
		exit(0);
	}else if(handle_commands() == 0){
		exit(0); 	//done
	}

	/*
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("Computing for %s & %s\n", argv[1], argv[2]);

	GCD = computeGCD(a, b, 1);

	printf("Your GCD is: %d\n", GCD);
	*/
	return 0;
}

