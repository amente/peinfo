/**
* peinfo.c 
* @author Amente
* Main program
*
*/
#include "peinfo.h"
#include "peread.h"
#include "peprint.h"
#include <stdio.h>


int main ( int argc, char *argv[] ){	
	
	if ( argc != 2 ) 
    {        
        printf( "usage: %s filename", argv[0] );
    }
    else 
    {        
        FILE *f = fopen( argv[1], "r" );   
        if ( f == 0 )
        {
            printf( "Could not open file\n" );
        }
        else 
        {
            struct COFFHeader c;			
			readCOFFHeader(f,&c);
			printCOFFHeader(&c);
        }
    }
    return 1;
}