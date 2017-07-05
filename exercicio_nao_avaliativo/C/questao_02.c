#include <stdio.h>

int main(int argc, char** argv)
{
	char data[6];
	
	gets(data);
	printf("%c", data);
		
	return 0;
}