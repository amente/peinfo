/**
* peprint.c 
* @author Amente
* implemetation of functions for printing PE information 
*/
#include "peprint.h"


void printDOS_Header(struct DOS_Header *h){     
	 printf("\nSignature: %c%c",h->signature[0],h->signature[1]);	
     	 
}
