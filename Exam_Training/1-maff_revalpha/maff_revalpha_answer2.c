#include <unistd.h>

int		main(void)
{
	char	letter;
	int		index;

	letter = 'z';
	index = 1;
	while (letter >= 'a')
	{
		if (index++ % 2 == 0)
		{
			letter -= 32;
			write(1, &letter, 1);
			letter += 32;
		}
		else
		{
			write(1, &letter, 1);
		}
		letter--;
	}
	write(1, &"\n", 1);
}