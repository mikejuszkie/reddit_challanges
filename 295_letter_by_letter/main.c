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

// Define macros and constaints
#ifndef  BUFFER_SIZE
 #define BUFFER_SIZE 100
#endif



// initialize global variables




int main(char a[], char b[])
{

	int str_len = 0;

  	// Take Input from user or file.

	char str_A[BUFFER_SIZE] = "a fall to the floor";
	char str_B[BUFFER_SIZE] = "braking the door in";

	// check the length of both strings.
	str_len = sizeof(str_A);
	if(str_len < sizeof(str_B))
		str_len = sizeof(str_B);

	// use a for loop to change the sting 
	// letter by letter and print out each step.
	printf("%s\n", str_A);
	for (int i = 0; i < str_len; ++i)
	{
		
		if(str_A[i] != str_B[i])
		{
			str_A[i] = str_B[i];
			printf("%s\n", str_A);
		}

	}


  	return 0;
}