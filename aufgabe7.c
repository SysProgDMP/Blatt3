#include <stdio.h>

int main(void) {
  int number1; /* first summand */
  int number2;/* second summand */   //hier fehlte jeweils ein Semikolon

  printf("Bitte erste ganze Zahl eingeben: "); 
  scanf("%i", &number1);			// hier musste ein & hin

  printf("Bitte zweite ganze Zahl eingeben: ");
  scanf("%i", &number2);	//hier ebenfalls
	
  if (number1 == number2) {				// == für Vergleich nicht =
  	 printf("Die eingegebenen Zahlen sind identisch.\n");
  }
  
  printf("Die Summe von %i und %i ist %i.\n",
         number1, number2, number1 + number2);

  return 0;
  }