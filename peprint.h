/**
* peprint.h 
* @author Amente
* Declaration of functions for printing PE information 
*/
#include "peinfo.h"

#ifndef __PEPRINT__
#define __PEPRINT__


void printDOS_Header(struct DOS_Header *h);  
void printCOFFHeader(struct COFFHeader *c);  

#endif