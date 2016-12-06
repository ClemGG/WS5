#include <stdlib.h>
#include <stdio.h>
#define sizeLine 255

int main(int argc, char *argv[]){
FILE *fichier;
fichier = fopen("/etc/passwd","r");
char ligne[sizeLine];
int userNumber = 0;

while(fgets(ligne, sizeLine, fichier) != NULL){
	userNumber++;
}
fclose(fichier);
printf("Il y a %d comptes créés sur la machine\n", userNumber);
return 0;

}
