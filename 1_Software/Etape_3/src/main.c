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

int PGCD_modulo(int N1, int N2)
{
	int cpyN1=0;
	if((N1==0 )|(N2==0)){
		if((N1==0 )& (N2==0)){
			return 0;
		}else if(N1==0){
			return N2;
		}else if(N2==0){
			return N1;
		}
	}
	do {
		cpyN1=N1;
		N1=N2;
		N2= cpyN1 % N2;//modulo
		//printf("%d,%d\n", N1,N2);
	} while(N2!=0);
	return N1;
}

int main (int argc, char * argv []){

	int A=65536;
	int PGCD1 =0;
	int PGCD2 =0;

	printf("(II) Starting PGCD program\n");
	printf(":A=%d B=%d PGCD=%d\n",0,0,PGCD(0,0));
	printf(":A=%d B=%d PGCD=%d\n",0,10,PGCD(0,10));
	printf(":A=%d B=%d PGCD=%d\n",5,0,PGCD(5,0));

	for(int i= 0;i<65536;i++){
		PGCD1=PGCD(A,i),
		PGCD2=PGCD_modulo(A,i);
		printf("%d :A=%d B=%d PGCD=%d, PGCD_modulo=%d\n",i,A,i,PGCD1,PGCD2);

	}
	printf("(II) End of PGCD program\n");

  return 0;
}
