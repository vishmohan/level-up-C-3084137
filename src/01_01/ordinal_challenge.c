#include <stdio.h>

char *ordinal(int v)
{
	/*
		 - create this function
		 - this code won't run with out it!
	 */
	int rem = v % 10;
	if ((v == 11) || (v == 12) || (v == 13))
		return "th";

	if ((rem == 0) || (rem > 3))
		return "th";

	switch (rem)
	{
	case 1:
		return "st";
		break;
	case 2:
		return "nd";
		break;
	case 3:
		return "rd";
		break;
	default:
		return "none";
	}
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	return (0);
}
