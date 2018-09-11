/*
 ============================================================================
 Name        : Jeu.c
 Author      : Miguel
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 10
#define MAX_NUMBER 1000

int main( void ) {

	int num, i;

	printf( "You have %d attempts to know which number between 1 and %d I am thinking of\n", MAX_ATTEMPTS, MAX_NUMBER );

	srand( time( NULL ) );
	num = 1 + rand() % (MAX_NUMBER - 1);  //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;

	for ( i = 0; i < MAX_ATTEMPTS; i++ ) {
		printf("\n Enter the %d try :\n",(i+1));
		scanf("%d",&j);
        if(num>x)
        {
            printf("%d is greater than x\n",num);
        }else 
						if(num<x)
         {
            printf("%d is less than x\n",num);
        }else

         {
            printf("%d = x \n YOU win\n",num);
            break;
         }

    }
    printf("x=%d\n",x);

	return EXIT_SUCCESS;
}
