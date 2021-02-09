#include "pgcd.h"
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
	assert(A>=0);
	assert(A<=tmpA);
	assert(A<=tmpB);
	assert(tmpA%A==0);
	assert(tmpB%A==0);
	return A;
}
