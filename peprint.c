/**
* peprint.c 
* @author Amente
* implemetation of functions for printing PE information 
*/
#include "peprint.h"


void printDOS_Header(struct DOS_Header *h){   
     printf("\n -------- DOS HEADER --------");  
	 printf("\nSignature: %c%c",h->signature[0],h->signature[1]);	
	 printf("\nNumber of bytes in last page: %hd",h->lastsize);
	 printf("\nNumber of 512Byte blocks(Pages): %hd",h->nblocks);
	 printf("\nNumber of relocation entries: %hd",h->nreloc);
	 printf("\nHeader size in paragraphs: %hd",h->hdrsize);
	 printf("\nMinimum paragraphs of none-code memory allocated: %hu",h->minalloc);
	 printf("\nMaximum paragraphs of none-code memory allocated: %hu",h->maxalloc);
	 printf("\nInitial SS(Stack Segment) RVA: %hd",h->ss);
	 printf("\nInitial SP (Stack Pointer) RVA: %hd",h->sp);
	 printf("\nChecksum: %hd",h->checksum);
	 printf("\nInitial CS(Code Segment) RVA: %hd",h->cs);
	 printf("\nInitial IP(Instruction Pointer) RVA: %hd",h->ip);
	 printf("\nOffset of relocation table: %hd",h->relocpos);
	 printf("\nOverlay Number: %hd",h->noverlay);
	 printf("\nData in Reserved 1: %4hu",h->reserved1);
     printf("\nOEM id: %hd",h->oem_id);
	 printf("\nOEM info: %hd",h->oem_info);
	 printf("\nData in Reserved 2: %10hu",h->reserved2);
	 printf("\noffset to the PE header : %ld",h->e_lfanew);
}

void printCOFFHeader(struct COFFHeader *c){
    printf("\n -------- COFF HEADER --------");  
	printf("\nMachine: %X",c->Machine);
	printf("\nNumber of Sections: %hu",c->NumberOfSections);
	printf("\nTime Stamp: %lu",c->TimeDateStamp);
	printf("\nPointer to Symbol Table: %X",c->PointerToSymbolTable);
	printf("\nNumber of Symbols: %lu",c->NumberOfSymbols);
	printf("\nSize of the optional header: %hu",c->SizeOfOptionalHeader);
	printf("\nCharacteristics: %X",c->Characteristics);
}