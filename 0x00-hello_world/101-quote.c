#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	const char message[] = ("and that piece of art is useful\" - Dora korpar, 2015-10-19\n");

	syscall(SYS_write, STDERR_FILENO, message, sizeof(message) - 1);
	return (1);
}
