// An illustration of command line arguments ...
// ... and more about pointers

#include <stdlib.h>		// Libraries which are needed
#include <stdio.h>

/*----------------------------------------------------------------------------*/

main (int argc, char *argv[])	// The 'root' programme; execution start
{
int ii;

if (argc == 1) printf("1 argument supplied\n");
else           printf("%d arguments supplied\n", argc);

printf("Argument pointer array: %016X\n", argv);

for (ii = 0; ii < argc; ii++)	// Iterate over arguments supplied
  {
  printf("  Pointer %2d at address %016X is %016X", ii, &argv[ii], argv[ii]);
  printf(" to string \"%s\".\n", argv[ii]);
   }

exit(0);
}

/*----------------------------------------------------------------------------*/
