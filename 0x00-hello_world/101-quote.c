#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	if (write(STDERR_FILENO, message, strlen(message)) == -1) 
	{
		write(STDERR_FILENO, strerror(errno), strlen(strerror(errno)));
	}
	return (1);
}
