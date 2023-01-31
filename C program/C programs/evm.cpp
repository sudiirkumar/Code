#include<stdio.h>
int main()
{
	int op;
	printf("\n\n\t\t\t\t\t\t VOTING 2020 \n\t\t\t\t\t---------------------------- \nEnter Your Choice : \n  1. BJP\n  2. Congress\n  3. RJD\n  4. AAP\n  5. JAAP\n");
	printf("Choice : ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("\n\nCongratulations! You have voted for BJP. \nEvery vote counts. \n\n\t\t\t\t\t*******THANKS FOR VOTING*******");
			break;
		case 2:
			printf("\n\nCongratulations! You have voted for Congress. \nEvery vote counts. \n\n\t\t\t\t\t*******THANKS FOR VOTING*******");
			break;
		case 3:
			printf("\n\nCongratulations! You have voted for RJD. \nEvery vote counts. \n\n\t\t\t\t\t*******THANKS FOR VOTING*******");
			break;
		case 4:
			printf("\n\nCongratulations! You have voted for AAP. \nEvery vote counts. \n\n\t\t\t\t\t*******THANKS FOR VOTING*******");
			break;
		case 5:
			printf("\n\nCongratulations! You have voted for JAAP. \nEvery vote counts. \n\n\t\t\t\t\t*******THANKS FOR VOTING*******");
			break;
		default:
			printf("\n--------INVALID CHOICE----------");
	}
	return 0;
}
