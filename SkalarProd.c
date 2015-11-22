/*******************************************************************************************/
/*                           Willkommen zum ersten Projekt!                                */
/*               Dieses Programm zielt darauf ab einen besseren Umgang mit:                */
/*                          Übungen mit Vektoren und Matrizen                              */
/*                                     -Arrays                                             */
/*                    -Verbesserung der Eingabe der Stringzerlegung                        */
/*                   -Berechnung einfacher mathematischer Sachverhalte                     */
/*******************************************************************************************/


/*******************************************************************************************/
/*                               Author: Stefan Hermeter                                   */
/*                                  Klasse:5/6 ABETI                                       */
/*                                 Datum:  14.11.2015                                      */
/*******************************************************************************************/


/*****************************************/
/*      Die verwendeten Libaries         */
/* bzw. die maximale Anzahl der Vektoren */
/*****************************************/
#include <stdlib.h>
#include <stdio.h>
#define N 2

/**************************************/
/*           Nebenprogramm            */
/*     multiplizieren des Arrays      */
/**************************************/


int skalar_produkt(int A, int B){
  int ergebnis;

  ergebnis = A * B;

  return ergebnis;
}

/**************************************/
/*           Nebenprogramm            */
/*        Addition der Arrays         */
/**************************************/

int matrizen_addition(int A, int B){
  int ergebnis;

  ergebnis = A + B;

  return ergebnis;
}

int matrix_multiplikation(int A, int B){
  int ergebnis;

  ergebnis = A * B;

  return ergebnis;
}

/***************************************/
/*     Main ist das Hauptprogramm      */
/***************************************/
int main (){

  int skalar1[N]={0}, skalar2[N]={0}, end[N]={0};
  int i;
  int *s1, *s2;

  
  printf("Dieses Programm ist in 4 Teil Programme augespalten:\nMit den Arrays wird ein Skalarprodukt erzeugt, eine Matrix addition und eine Matrix multiplikation,\n");

  printf("Bitte geben Sie die Werte für den ersten Array an:");
  // Einlesen des Arrays über stdin
  for ( i = 0; i < N; i++){
    scanf("%d", &skalar1[i]);
  }
  
  /*
  for ( i = 0; i < N; i++){
    fgets ( c, i, stdin);
    skalar[i] = strtol ( c, *p, i);
  }
  */
  printf("Bitte geben Sie die Werte für den zweiten Array an:");

  // Einlesen des Arrays über stdin
  for ( i = 0; i < N; i++){
    scanf("%d", &skalar2[i]);
  }          
  
  /*
  for ( i = 0; i < N; i++){
    printf("skalar1:%d\n", skalar1[i]);
  }
  printf("\n");
  */

  /**************************************/
  /*  pointer übergabe von einlesewert  */
  /*    Aufruf der Multiplikation       */
  /*          vom Einlesewert           */
  /**************************************/

  for ( i = 0; i < N; i++){
    s1 = &skalar1[i];
    s2 = &skalar2[i];
    end[i] = skalar_produkt(*s1, *s2);
  }  

  // Ausgabe der Multiplikation SKALARPRODUKT
  printf("Das Skalarprodukt lautet:\n");
  for ( i = 0; i < N; i++){
    printf("Proudukt[%d]:%d\n", i, end[i]);
  }

  /**************************************/
  /*  pointer übergabe von einlesewert  */
  /*    Aufruf der Matrizenrechnung     */
  /*          vom Einlesewert           */
  /**************************************/ 

  for ( i = 0; i < N; i++){
    s1 = &skalar1[i];
    s2 = &skalar2[i];
    end[i] = matrizen_addition(*s1, *s2);
  }

  // Ausgabe der Addition MATRIZENADDITION
  printf("Das Matrizen addition lautet:\n");
  for ( i = 0; i < N; i++){
    printf("Proudukt[%d]:%d\n", i, end[i]);
  }

  int matpr1[N][N], matpr2[N][N], mat_erg[N][N];
  //  int *p1, *p2;
  int j;
  
  printf("Bitte geben sie die Zahlen der zu berechnenden matrize1 an:\n");
  for ( i = 0; i < N; i++){
    for ( j = 0; j < N; j++){
      printf("Matrize[%d][%d]\t", i, j);
      scanf("%d", &matpr1[i][j]);
    }
  }

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      printf("Matrizen[%d][%d] \t%d\n", i, j, matpr1[i][j]);
    }
  }

  // Eingabe zweiwertiges Array 
  printf("Bitte geben sie die Zahlen der zu berechnenden matrize2 an:\n");
  for ( i = 0; i < N; i++){
    for ( j = 0; j < N; j++){
      printf("Matrize[%d][%d]\t", i, j);
      scanf("%d", &matpr2[i][j]);
    }
  }

  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      printf("Matrizen[%d][%d] \t%d\n", i, j, matpr2[i][j]);
    }
  }
  
  int k;

  /**************************/
  /* Matrizenmultiplikation */
  /**************************/
  
  for ( i = 0; i < N; ++i){
    for ( j = 0; j < N; ++j){
      int a = 0;
      for ( k = 0; k < N; ++k){
	a += matpr1[i][k] * matpr2[k][j];
      }
      mat_erg[i][k] = a;
      printf("Matrizen Ergebnis: [%d][%d]\t%d\n", i, j, mat_erg[i][k]);
    }
  }

  return 0;
}
