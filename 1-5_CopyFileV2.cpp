#include <stdio.h>
/* копирование ввода на вывод; 2-я версия */
main ()
	{
 	int C;
 	while ((C = getchar()) != EOF)
	putchar (C);
}
