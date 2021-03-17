/* -------------exercise--------------
 simple date calculator
 no pointers or arrays
 just structs and function calls
 ----------------------------------- */

#include<stdio.h>
#include<stdlib.h>

//defining my struct gg/mm/aaaa
typedef struct date{
	int giorno;
	int mese;
	int anno;
	}date; //end of struct
	
//----my functions----//
int bisestile (int a);
int toSearch (int b, int f);
int stoSearch (int g, int h);
int lastday (int c, int d);
int OutPut (int i, int j, int l);

int bisestile (int a){
 int my_flag;
 if (a%4==0)
	my_flag=1;
 return my_flag;
}

int toSearch(int b, int f){
 //setting my flag
 int found;
 if ((f==01 || f==03 || f==05 || f==07 || f==8 || f==10) && b==31)
 		found=1;
 return found;
}

int stoSearch (int g, int h){
//setting my flag
 int s_found;
 if (((h==04 || h==06 || h==9 || h==11) && g==30) || (h==02 && g==28))
 		s_found=1;
 
 return s_found;
}

int lastday (int c, int d){
	int flag;
	if (c==31 && d==12)
	flag=1;
	return flag;
}

int OutPut (int i, int j, int l){
	printf("La data di domani è:\n%.2i : %.2i : %.4i\n", i, j, l);
}


//----end of my functions----//

int main(void){

	//input of my date
	date giorno_dopo;
	
	printf("\n\nChe giorno è domani?\n\n");
	printf("---i mesi di agosto e settembre devono essere scritti senza lo 0 davanti---\n");
	printf("\n\n");
	printf("Inserisci la data di oggi (gg/mm/aaaa): ");
	scanf("%2i %2i %4i", &giorno_dopo.giorno, &giorno_dopo.mese, &giorno_dopo.anno);

	int monthToSearch, smonthToSearch, silvestro, stampa, anno;
	
	//----------- function call -----------//
	
	monthToSearch = toSearch(giorno_dopo.giorno, giorno_dopo.mese); //check if it's the last of the month
	smonthToSearch = stoSearch(giorno_dopo.giorno, giorno_dopo.mese); //check if it's the last of the month
	silvestro = lastday(giorno_dopo.giorno, giorno_dopo.mese); //check if it's the last day of the year
	anno = bisestile(giorno_dopo.anno); //check if it's a leap year
	
	if (anno==1 && giorno_dopo.mese==02 && giorno_dopo.giorno==28){
		giorno_dopo.giorno++;
		stampa=OutPut(giorno_dopo.giorno, giorno_dopo.mese, giorno_dopo.anno);
		} //end of leap year
	else if (monthToSearch==1){
		giorno_dopo.mese++;
		giorno_dopo.giorno=01;
		stampa=OutPut(giorno_dopo.giorno, giorno_dopo.mese, giorno_dopo.anno);
		} //end of monthToSearch
	else if (silvestro==1){
		giorno_dopo.giorno=01;
	 	giorno_dopo.mese=01;
	 	giorno_dopo.anno++;
	 	stampa=OutPut(giorno_dopo.giorno, giorno_dopo.mese, giorno_dopo.anno);
	 	} //end of silvestro
	else if (smonthToSearch==1){
		giorno_dopo.mese++;
		giorno_dopo.giorno=01;
		stampa=OutPut(giorno_dopo.giorno, giorno_dopo.mese, giorno_dopo.anno);
		} //end of smonthToSearch
	else	{
	      giorno_dopo.giorno++;
	      stampa=OutPut(giorno_dopo.giorno, giorno_dopo.mese, giorno_dopo.anno);
	      } //output of my next day
 return 0;
}
