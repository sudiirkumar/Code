#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][50],temp[50];
	//getting string input
	for(int i=0;i<5;i++)
	{
		printf("Enter word %d : ",i+1);
		fgets(str[i],sizeof(str[i]),stdin);
	}
	//storing strings in lexicographical order
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			//swapping strings if they are not in the lexicographical order
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("\nIn the lexicographical order : \n");
	for(int i=0;i<5;i++)
	{
		fputs(str[i],stdout);
	}
	return 0;
}
