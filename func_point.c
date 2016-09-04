#include <stdio.h>
#include <stdlib.h>
struct india 
	{
	char capital[300];
	}name_1[300]={"BHUNESWAR","BHOPAL","CHENNAI"};

int main()
	{
	struct india **PTR=(struct india **)malloc(sizeof(struct india));
	PTR=&name_1;
	//printf("%s",(char **)PTR->capital);
	return 0;
}
