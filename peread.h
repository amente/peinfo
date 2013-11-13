/**
* peread.h 
* @author Amente
* Declaration of functions for reading PE information from file stream
*
*/
#include "peinfo.h"

#ifndef __PEREAD__
#define __PEREAD__

/**
* Reads the DOS Header from a file stream assumes it is a valid PE file
*/
void readDOS_Header(FILE *f , struct DOS_Header *h);
void readCOFFHeader(FILE *f , struct COFFHeader *c);

#endif