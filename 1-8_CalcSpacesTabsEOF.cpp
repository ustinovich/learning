#include "stdio.h"

main()
{
	int c = 0, Spaces = 0, Tabs = 0, EndFiles = 0;
	while ((c = getchar()) != EOF)
	{
 		if (c == ' ')
 			++Spaces;
 		if (c == '\t')
 			++Tabs;
 		if (c == '\n')
 			++EndFiles;
 	}
 	printf("Spaces - %d, Tabs - %d, EndFiles - %d\n", Spaces, Tabs, EndFiles);
}