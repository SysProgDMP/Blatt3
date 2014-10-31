#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void erstelleDatei (int n, int m){
	FILE* datei;
	printf ("Geben sie hier den Dateipfad ein, in dem die Datei erstellt werden soll und den Dateinamen mit .txt an: \n");
	char pfad;
	scanf ("%s", &pfad);
	datei = fopen(&pfad ,"w"); 
	int i,j;
	for (i=0; i<m;i++){
		for(j=0; j<n; j++){
			long zahl = (rand() % 3276800) - 1600000;
			fprintf (datei, "%li ",zahl);
		}
		fprintf(datei, "\r\n");
	}
	fclose(datei);
}

int main (int arg, char** argv){
	int n= ( atoi(argv[1]));
	int m= (atoi (argv[2]));
	erstelleDatei(n,m);
	return 0;
}