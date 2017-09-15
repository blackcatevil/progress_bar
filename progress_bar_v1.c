#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>		//usleep()

void progress_bar1_test(unsigned int percentage)
{
	unsigned int i = percentage%4;
	char bar[4] = {'|', '/', '-', '\\'};

	printf("\rProgress bar...%c %d%% completed.", bar[i], percentage);
	fflush(stdout);
}
int main()
{
	unsigned int percentage=0;

    while(percentage<100){
        ++percentage;
        progress_bar1_test(percentage);
        usleep(100000);
    }
    printf("\n");
    
	return 0;
}
