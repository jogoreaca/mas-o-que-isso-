#include <string.h>

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
char* Answer2(int argc,char** argv)
{
	int i;
	turn++;
	if(turn==1)
		return "Mas o que eh isso aqui?";
	if(turn==2)
		return "Desequilibrado!";
	for(i=1;i<argc;i++)
	{
		if(strcmp(tolower(argv[i]),"vagabunda")==0)
			return "Toda Mulher...nenhuma mulher é vagabunda!";
		
	}
	return "Mas o que eh isso?";
}

