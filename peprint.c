/**
* peprint.c 
* @author Amente
* implemetation of functions for printing PE information 
*/
#include "peprint.h"


void printDOS_Header(DOS_Header *h){

    printf("\nSignature: %2c \nLastSize: %h \nNBlocks: %h \nNReloc: %h \nHDRSize: %h \nMinalloc: %h \nMaxalloc: %h ",
            h->signature,
			h->lastsize,
			h->nblocks,
			h->nreloc,
			h->hdrsize,
			h->minalloc,
			h->maxalloc);
	
	printf("\nSS: %p \nSP: %p \nChecksum: %h \nIP: %p \nCS: %p \nRelocpos: %h \nNooverlay: %h \nReserved1: %4h \nOEM_id: %h \nOEM_info: %h \nReserved2: %10h \nE_lfanew:%l",
			h->ss,
			h->sp,
			h->checksum,
			h->ip,
			h->cs,
			h->relocpos,
			h->noverlay,
			h->reserved1,
			h->oem_id,
			h->oem_info,
			h->reserved2,
			h->e_lfanew) ;      
}
