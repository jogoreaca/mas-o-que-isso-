#include<stdio.h>
#include<string.h>

static int turn=0; //turn starts on zero



char* Answer(char* quote)
{
	turn++;
	if(turn==1)
		return "Mas o que eh isso aqui?";
	if(turn==2)
		return "Desequilibrado!";
	if(strcmp(tolower(quote),"vagabunda")==0)
		return "Toda Mulher...nenhuma mulher é vagabunda!";
	return "Mas o que eh isso?";

return 0;
}
