#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *arg[])
{
	char s[90];
	int i;
	if(fgets(s,90,stdin))
	{
		for(i=0;s[i];i++)
		{
			if (s[i]=='a')
			{
				s[i]='A';
			}
			else
			{
				if(s[i]=='b')
				{
					s[i]='B';
				}
			}
		}
	}
	puts(s);
	return 0;
}
