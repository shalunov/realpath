#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int
main( int argc, char** argv )
{
        char *path;

	if (argc != 2) {
		fprintf(stderr, "Usage: realpath <filename>\n");
		exit(EXIT_FAILURE);
	}

	path = realpath(argv[1], NULL);
	if (!path) {
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
	puts(path);

        exit(EXIT_SUCCESS);
}
