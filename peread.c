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

void readCOFFHeader(FILE *f , struct COFFHeader *c){
    struct DOS_Header h;
	readDOS_Header(f,&h);	
    long int offset = h.e_lfanew+PEHEADER_SIZE;
	fseek(f,offset,SEEK_SET);
	fread(c,sizeof(struct COFFHeader),1,f);
}
