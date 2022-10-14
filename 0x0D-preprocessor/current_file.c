#include <string.h>
#include <stdio.h>
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

int main(void)
{
	printf("%s", __FILENAME__);
	return (0);
}
