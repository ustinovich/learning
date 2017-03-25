#include "stdio.h"

main()
{
	int c, Spaces = 0;
	    while((c = getchar()) != EOF){
        
        if(c == ' ')
        	{
        	if(Spaces == 0)
        		{  
        		putchar(c);  
				Spaces = 1;    
        		}
        	}
        if(c != ' ')
        	{
            putchar(c);
        	Spaces = 0;
        	}
    }
}