#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int PGCD(int A, int B)
{
		if(A==0){
			return B;
		}else if(B==0){
			return A;
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
double Rand(void)
{
	return 65535 * ((rand () / (double) RAND_MAX));
}

int main (int argc, char * argv []){
	int A=0;
	int B=0;
	for (size_t i = 0; i < 20; i++) {
		A=Rand();
		B=Rand();
		printf("idata_a  <= STD_LOGIC_VECTOR( TO_UNSIGNED( %d, 32));\n",A);
		printf("idata_b  <= STD_LOGIC_VECTOR( TO_UNSIGNED( %d, 32));\n",B);
		printf("idata_en <= '1';\n");
		printf("wait for 10 ns;\n");
		printf("while odata_en = '0' loop\n");
		printf("\tidata_en <= '0';\n");
		printf("\twait for 10 ns;\n");
		printf("end loop;\n");
		printf("ASSERT UNSIGNED( odata) = TO_UNSIGNED( %d, 32)  SEVERITY ERROR;\n",PGCD(A, B) );
	}

  return 0;
}


/*idata_a  <= STD_LOGIC_VECTOR( TO_UNSIGNED( 18, 32) );
idata_b  <= STD_LOGIC_VECTOR( TO_UNSIGNED( 12, 32) );
idata_en <= '1';
wait 10 ns;
while odata_en = '0' loop
    idata_en <= '0';
    wait 10 ns;
end loop;
ASSERT UNSIGNED( odata = TO_UNSIGNED( 6, 32) ) SEVERITY ERROR;*/
