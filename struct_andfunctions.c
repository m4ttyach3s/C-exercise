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
void Stampa(struct studenti s1);
void looping_call();
void callback(struct studenti s1);

//---output of my results---//
void callback(struct studenti s1){
 	 s1=trovastud();
 	 Stampa(s1); 
}

void looping_call(){
 struct studenti s1;
 int a;
 printf("\nVuoi inserire altri studenti?\n-Si=1\n-No=0\n");
 scanf("%i", &a);
 	if(a==1){
 	 callback(s1);
 	 looping_call();
 	 }
 return;
}

void Stampa(struct studenti s1){
	printf("\nNome: %s", s1.nome);
	printf("\nCognome: %s", s1.cognome);
	printf("\nAnni: %i\n", s1.anni);
	}
	
struct studenti trovastud(){
	struct studenti s2;
	printf("\nInserisci il nome studente: ");
	scanf(" %[^\n]%*c", s2.nome); //getting values until enter is pressed
	printf("\nInserisci il cognome studente: ");
	scanf(" %[^\n]%*c", s2.cognome); //getting values until enter is pressed
	printf("\nInserisci l'età studente: ");
	scanf(" %i", &s2.anni);
	return s2;
}
//---end of function area--//
int main(void){
 	struct studenti s1;
 	struct studenti s3;
 	struct studenti s4;
 	
 	s1 = trovastud();
 	Stampa(s1); 
 	s1.nome[size]='\0'; //emptying my array nome
 	s1.cognome[size]='\0'; //emptying my array cognome
	looping_call();
 return 0;
}
