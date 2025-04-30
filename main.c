#include <stdio.h>
#include <stdlib.h>
#include "log.h"
#define SUM(A,B) ((A)+(B))


int main(int argc,char *argv[])
{
	if(argc < 3)
	{
		log_trace("Arguments are not meet requires");
		log_debug("Arguments are not meet requires");
		log_warn("Arguments are not meet requires");
		log_error("Arguments are not meet requires");
		log_fatal("Arguments are not meet requires");
		return -1;
	}
	else
	{
		log_info("The sum is %d\n", SUM(atoi(argv[1]),atoi(argv[2])));
		return 0;
	}
}
