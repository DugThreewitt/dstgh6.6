/* ************************************************************************ *
 * func.h 
 * function prototypes for mysh.c
 * Dug Threewitt - dstgh6
 * CS2750 - Mon/Wed
 * *********************************************************************** */

#include <string.h>
#include <signal.h>

#ifndef FUNC_H_
#define FUNC_H_

int makeargv ( const char * s, const char * delimiters, char *** argvp );

void freemakeargv ( char ** argv );

char * readLine();

char * makeCmd ( int pathTokens, char ** pathArgs, char ** myArgs );

void callCmd ( char * cmdPath, char ** myArgs );

char * parsePS( const char * prompt );

static void handleChildSignal( pid_t child );

//static void handleMainSignal( int ignore );

#endif
