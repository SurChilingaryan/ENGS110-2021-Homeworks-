

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum = 0;
	FILE *fdatacollect;
	fdatacollect = fopen("data.txt", "r");
	int *datacollect;
	datacollect = (int*)malloc(200*sizeof(int));
	if (fdatacollect == NULL)
	{
	printf("Error is available!!!");
		exit(1);
	}
	while(fscanf(fdatacollect, "%d", datacollect)!=EOF)
	{
		sum = sum + *datacollect;
	}
	printf("The result is %d\n", sum);
	fclose(fdatacollect);
	fdatacollect = fopen("finalresult.txt", "w+");
	fprintf(fdatacollect, "%d\n", sum);
	fclose(fdatacollect);
	return 0;



}
