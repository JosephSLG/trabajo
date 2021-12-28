#include <unistd.h> // execvp()
#include <stdio.h>  // printf()
#include <stdlib.h> // EXIT_SUCCESS, EXIT_FAILURE

int main(void) {
	char *const cmd[] = {"ls", "-l", NULL};
	execvp(cmd[0], cmd);
	printf("Return from execvp() not expected\n");
	exit(EXIT_FAILURE);
}
