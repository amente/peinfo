/**
* peread.c 
* @author Amente
* Implementation of functions for reading PE information from file stream
*
*/

#include "peinfo.h"

void readDOS_Header(FILE *f, struct DOS_Header *h){
	fread(h,sizeof(struct DOS_Header),1,f);                 	
}