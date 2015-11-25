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

int main(int argc, char *argv[]){
	int a , b, GCD;
	//validate input
	if(argc < 3){
		fprintf(stderr, "\x1b[31mInvalid input at file %d line %d. Form: ./EuclideanAlgo arg1 arg2 \x1b[0m \n", __FILE__, __LINE__);
		exit(0);
	}


	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("Computing for %s & %s\n", argv[1], argv[2]);

	GCD = computeGCD(a, b, 1);

	printf("Your GCD is: %d\n", GCD);
}

