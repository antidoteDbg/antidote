#include "../include/antidote.h"
#include <stdio.h>

//strcmp
#include <string.h>

char* get_argument(int arg, int argc, char* argv[])
{
	if(arg < 0 || arg >= argc)
	{
		printf("Command-line invalid.\n");
		exit(0);
	}
	return argv[arg];
}
void print_help()
{
	printf("Antidote Command-line [filename]\n");
}


void start_antidote_session(char* filename)
{
	pid_t process = loadProcess(filename);
	char command[256];
	while(1)
	{
		scanf("%s",command);
		if(!strcmp(command, "kill"))
		{
			break;
		}  
	}
}

int main(int argc, char* argv[])
{
	int i = 1;
	if(argc == 1)
	{
		print_help();
		return 0;
	}
	for(i = 1; i < argc; ++i)
	{
		if(!strcmp(argv[i], "-help"))
		{
			print_help();
		}else
		{
			start_antidote_session(argv[i]);
		}
	}
	return 0;
}
