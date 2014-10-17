

#include<stdio.h>
#include "answer.h"
#define ANSWERTIME 1000 //MileSeconds
#define EVER ;;
void EternalLoop(void)
{
unsigned int i=0;
	for(EVER)
	{
	puts("mas o que e isso?");
	usleep(ANSWERTIME*1000);
	}
}
int main (int argc, char** argv)
{
	unsigned int answerTime=ANSWERTIME*1000;
	if(argc<2)
		EternalLoop();
		
	return 0;	

}
