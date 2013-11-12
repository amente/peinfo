/**
* peread.c 
* @author Amente
* Implementation of functions for reading PE information from file stream
*
*/

#include "peinfo.h"

void readDOS_Header(FILE *f, DOS_Header *h){
	fscanf(f,"%2c %h %h %h %h %h %h %p %p %h %p %p %h %h %4h %h %h %10h %l",
	         &h->signature,
			 &h->lastsize,
			 &h->nblocks,
			 &h->nreloc,
			 &h->hdrsize,
			 &h->minalloc,
			 &h->maxalloc,
			 &h->ss,
			 &h->sp,
			 &h->checksum,
			 &h->ip,
			 &h->cs,
			 &h->relocpos,
			 &h->noverlay,
			 &h->reserved1,
			 &h->oem_id,
			 &h->oem_info,
			 &h->reserved2,
			 &h->e_lfanew);                 	
}