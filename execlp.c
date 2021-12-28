#include <unistd.h> // execlp()
#include <stdio.h>  // printf()
#include <stdlib.h> // EXIT_SUCCESS, EXIT_FAILURE

int main(int argc, char *argv[]) {
	execlp("ls", "ls", NULL);
	printf("Return from execlp() not expected\n");
	exit(EXIT_FAILURE);
}
