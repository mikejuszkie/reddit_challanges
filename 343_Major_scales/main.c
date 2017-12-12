/*************************
 * main.c
 *
 *************************/

// include standard libs
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <inttypes.h>

// include custom headders



// initialize global variables

//
// Initialize the Debug Function 
//
#ifdef DEBUG
	#define DEBUG_PRINT(fmt, args...)    printf(fmt, ## args)
#else
	#define DEBUG_PRINT(fmt, args...)    /* Don't do anything in release builds */
#endif

int Var = 54;
int main(int argc, char const *argv[])
{
	//
	// Display Banner Screen
	//
	printf("Major Scales\n");
	
	//
	// Note That this is a Debug Build
	//
	DEBUG_PRINT("#######################################################\n");
	DEBUG_PRINT("##################### Debug Build #####################\n");
	DEBUG_PRINT("#######################################################\n");

  	return 0;
}
