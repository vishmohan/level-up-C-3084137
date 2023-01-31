#include <stdio.h>
#include <string.h>

void center_text(int width, char *text)
{
	/*
		 - write this function to complete the challenge
		 - this code won't run until the function is
		 written
	*/
	char space = ' ';
	int mlen = strlen(text);
	int start = (width - mlen) / 2;

	int i;
	for (i = 0; i < start; ++i)
		putchar(space);
	printf("%s\n", text);
}

int main()
{
	/* some sample text to center */
	char *title[] = {
			"March Sales",
			"My First Project",
			"Centering output is so much fun!",
			"This title is very long, just to see whether the code can handle such a long title"};
	int x;

	/* output each of the strings, centered */
	for (x = 0; x < 4; x++)
	{
		/* assume the screen width to be 80 characters */
		center_text(80, title[x]);
	}

	return (0);
}
