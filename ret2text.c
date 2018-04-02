#include <stdio.h>
#include <unistd.h>
#include <string.h>

void public (char* args)	{
	char buff[12];
	strcpy (buff, args);
	printf("public\n");
}

void test(void)	{
	printf("secret\n");
}

int main(int argc, char* argv[])	{
	if (getuid() == 0)	test();
	else	public(argv[1]);
}

