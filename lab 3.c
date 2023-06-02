#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]) 
{
	char s[80];
	int i;
	if(fgets(s,80,stdin123)
	{
		for(i=0;s[i];i++)
		{
			if(s[i]=='a')
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
