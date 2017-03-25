#include "stdio.h"

main()
{
	int c, SpecSym;
	    while((c = getchar()) != EOF)
	    {
	    SpecSym = 0;
	    if (c == '\t')
	    	{
	    	printf("\\t");
	    	SpecSym = 1;
	    	}
	    if (c == '\b')
	    	{
	    	printf("\\b");
	    	SpecSym  = 1;
	    	}
	    if (c == '\\')
	    	{
	    	printf("\\\\");
	    	SpecSym  = 1;
	    	}
	    if (SpecSym == 0)
	    	putchar(c);	    
	    }
}