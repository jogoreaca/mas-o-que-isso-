
#include<stdio.h>
#define EVER ;;
void EternalLoop(void)
{
	for(EVER)
	{
	printf("mas o que e isso? \n");
	}
}
int main (int argc, char** argv)
{
	if(argc<2)
		EternalLoop();
	return 0;	

}
