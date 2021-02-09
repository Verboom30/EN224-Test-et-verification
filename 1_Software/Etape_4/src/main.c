#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <assert.h>

int PGCD(int A, int B)
{
	int tmpA =A;
	int tmpB =B;
	assert(A>=0);
	assert(B>=0);
	assert(A<=65536);
	assert(B<=65536);
	while (A!=B) {
		if (A>B) {
			A=A-B;
		}else{
			B=B-A;
		}
	}
	return A;
}

int main (int argc, char * argv []){
	int A=20;
	int B=3;
	printf("(II) Starting PGCD program\n");
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=3,B=20;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=2,B=2;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=782,B=221;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=655,B=798;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=2210,B=7820;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=1755,B=1053;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	A=6897,B=5073;
	printf("(II) End of PGCD program\n");
  return 0;
}
