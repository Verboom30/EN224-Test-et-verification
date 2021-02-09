#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <assert.h>
#include "pgcd.h"



int main (int argc, char * argv []){
	int A=20;
	int B=3;
	printf("(II) Starting PGCD program\n");
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==1);
	A=3,B=20;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==1);
	A=2,B=2;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==2);
	A=782,B=221;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==17);
	A=655,B=798;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==1);
	A=2210,B=7820;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==170);
	A=1755,B=1053;
	printf("A=%d B=%d PGCD=%d\n",A,B,PGCD(A,B));
	assert(PGCD(A,B)==351);
	A=6897,B=5073;
	printf("(II) End of PGCD program\n");
  return 0;
}
