#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "pgcd.h"

char *pathA = "ref_A.txt";
char *pathB = "ref_B.txt";
char *path_resuC = "resu_C.txt";

void exit_if(int condition, const char *prefix)
{
    if (condition) {
        perror(prefix);
        exit(1);
    }
}
void read_file(char *path, int *tab)
{
	char buf[60];
	char* message;
	message=malloc(0*sizeof(char));
	FILE *fb =fopen(path,"r");
	exit_if(fb<0,"Erreur open file");
	for (int k = 0; k < 65536; k++) {
		message=fgets (buf,60, fb);
		tab[k]=atoi(message);
	}
	fclose(fb);
}

void write_file(char *path, int *tab)
{
	char buf[60];
	char* message;
	FILE *fb =fopen(path,"w");
	exit_if(fb<0,"Erreur open file");
	for (int k = 0; k < 65536; k++) {
		message=fgets (buf,60, fb);
		tab[k]=atoi(message);
	}
	fclose(fb);
}

int main (int argc, char * argv [])
{
	int valeur_A[65536] ={0};
	int valeur_B[65536] ={0};
	read_file(pathA,valeur_A);
	read_file(pathB,valeur_B);
  FILE *fp;
  fp = fopen(path_resuC, "w");//opening file
	for (int i = 0; i < 65536; i++) {
    fprintf(fp, "%d\n",PGCD(valeur_A[i],valeur_B[i]));
	}
  fclose(fp);
  return 0;
}
