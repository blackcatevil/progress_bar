#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>		//usleep()

#define BAR "||||||||||||||||||||"
#define BAR_WIDTH 20

void progress_bar2_test(unsigned int percentage)
{
	unsigned int lbar=percentage*BAR_WIDTH/100;
	unsigned int rbar=BAR_WIDTH-lbar;
	printf("\r[%.*s%*s] %d%% Completed.", lbar, BAR, rbar, "", percentage);
	fflush(stdout);
}

int main()
{
    unsigned int percentage=0;
	while(percentage<100){
		++percentage;
		progress_bar2_test(percentage);
		usleep(100000);
	}
	printf("\n");

	return 0;
}
