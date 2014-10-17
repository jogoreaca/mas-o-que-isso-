

#include<stdio.h>
#include "answer.h"
#define ANSWERTIME 1000 //MileSeconds
#define VERSION 0.001F
#define EVER ;;
void EternalLoop(void)
{

	for(EVER)
	{
	puts("mas o que e isso?");
	sleep(ANSWERTIME*1000);
	}
}
int main (int argc, char** argv)
{
	if(argc<2)
		EternalLoop();
	else if(strcmp(argv[1],"-ver")==0)
	printf("Mas o que eh isso?\nVersion %.3f\nCopyright Jogoreaca\nTodos os direitos reservados\n",VERSION);	
	return 0;	

}
