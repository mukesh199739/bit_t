#include<stdio.h>
#include<stdlib.h>
void main()
{
	//char *a= new char[4000];
	FILE *fptr;
	char filename[15];
	char ch;
	unsigned char buffer[1000];
	printf("enter the filename to be opened");
	scanf("%s",filename);

//***************reading as a buffer**************//

	fptr=fopen(filename,"rb");
	fread(buffer,sizeof(buffer),1,fptr);
	for(int i=0;i<1000;i++)
	{
		printf("%x  ",buffer[i]);
	}
	fclose(fptr);



//****************reading as string*****************//
	//@@@@@@@ INITIALLY COMMENTED OUT @@@@@@@//
	/*
    fptr=fopen(filename,"rb");
    if(fptr == NULL)
	{
		printf("cannot open file \n");
		exit(0);
	}

	ch = fgetc(fptr);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fptr);
	}
	fclose(fptr);
	*/
}