#include "printf.h"

int main()
{
	int i = ft_printf("cspdiuxX%\n" );
	ft_printf("%d", i);

	
	int c = printf("%d %s %i hello world",   57,  "hello", 45);
	printf("%d", c);
}