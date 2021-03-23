/* Create a structure that can contain student's name, surname and age. Every main line has to be a function call*/

#include<stdio.h>
#include<stdlib.h>
#define size 100

//---defining my struct---//

struct studenti{
	char nome[size], cognome[size];
	int anni;
	};

//---function area---//

struct studenti trovastud();
struct studenti Stampa();

struct studenti Stampa(struct studenti s1){ //output of my results by passing s1, which had s2 values in it

	printf("Nome: %s", s1.nome);
	printf("\nCognome: %s", s1.cognome);
	printf("\nAnni: %i\n", s1.anni);
	
	}

struct studenti trovastud(){

	struct studenti s2;

	printf("\nNome studente: ");
	scanf("%[^\n]%*c", s2.nome); //getting values until enter is pressed
	
	printf("Cognome studente: ");
	scanf("%[^\n]%*c", s2.cognome); //getting values until enter is pressed
	
	printf("Età studente: ");
	scanf("%i", &s2.anni);

return s2;
}

//---end of function area---//

//---| main |---//

int main(void){
 	struct studenti s1;
 	struct studenti s3;
 	s1 = trovastud();
 	s3 = Stampa(s1);
 return 0;
}
