#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

int PGCD(int A, int B)
{
	if((A==0 )|(B==0)){
		if((A==0 )& (B==0)){
			return 0;
		}else if(A==0){
			return B;
		}else if(B==0){
			return A;
		}
	}
	while (A!=B) {
		if (A>B) {
			A=A-B;
		}else{
			B=B-A;
		}
	}
	return A;
}
double RandA(void)
{
	return 65535 * ((rand () / (double) RAND_MAX));
}

double RandB(void)
{
	return 65535 * ((rand () / (double) RAND_MAX));
}

int main (int argc, char * argv []){
	srand ((int) time (NULL));
	int A=0;
	int B=0;

	printf("(II) Starting PGCD program\n");
	printf(":A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	printf(":A=%d B=%d PGCD=%d\n",0,10,PGCD(0,10));
	printf(":A=%d B=%d PGCD=%d\n",5,0,PGCD(5,0));
	for(int i= 0;i<20;i++){
		A=RandA();
		B=RandB();
		printf("%d :A=%d B=%d PGCD=%d\n",i,A,B,PGCD(A,B));
	}
	printf("(II) End of PGCD program\n");
  return 0;
}
