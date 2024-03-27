#include <stdio.h>
#include <stdlib.h>

#include <linux/unistd.h>
#include <sys/syscall.h>

#include "priv.h"

/*
 * Function: main()
 *
 * Description:
 *   Entry point for the runas program.
 *
 * Inputs:
 *   argc - The number of argument with which this program was executed.
 *   argv - Array of pointers to strings containing the command-line arguments. 
 *
 * Return value:
 *   0 - This program terminated normally.
 */
int
main (int argc, char ** argv) {
	/* Print a friendly message */
	printf ("Test program for QEMU!\n");

	priv_raise (1, CAP_FOWNER);
	priv_lower (1, CAP_FOWNER);

	/* Exit the program */
	return 0;
}
