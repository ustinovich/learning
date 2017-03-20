#include <stdio.h>
/* копирование ввода на вывод; 1-я версия */
main()
{
 	int C;
 	C = getchar();
 	while (C != EOF) 
 	{
 		putchar (C);
 		C = getchar();
 	}
}	
