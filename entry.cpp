
#include <stdio.h>

#include "include/logger/logger.h"

int main() 
{
	LOG::Logger l(LOG::oStreamSink());
	LOG::print("Hello World!");
	return 0;
}
