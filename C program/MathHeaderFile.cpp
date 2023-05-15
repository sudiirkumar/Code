#include<stdio.h>
#include<math.h>
int main(){
	int x;
	int y;
	printf("Enter value of x and y: ");
	scanf("%d%d",&x,&y);
	int ans = pow(x,y);
	printf("Answer is %d",ans);

	int num;
	printf("\nEnter any number to find its squareroot: ");
	scanf("%d",&num);
	float answer = sqrt(num);
	printf("squareroot is %f",answer);
	int n = sin(3.14);
	printf("Sin(180) is %d",n);
	return 0;
}