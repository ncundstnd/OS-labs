#include <stdio.h>
#include <unistd.h>

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		printf("%d-%d\n", getpid(), i);
		sleep(2);
	}
}