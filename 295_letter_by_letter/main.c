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




int main(int argc, char const *argv[])
{

	int str_len = 0;

  	// Take Input from user or file.

	char str_A[4] = "this";
	char str_B[4] = "shat";

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