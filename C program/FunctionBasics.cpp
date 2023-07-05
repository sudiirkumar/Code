#include<myheaderfile.h>
int main()
{
    printf("%d\n",power(3,4));
    printf("%d\n",factorial(4));
    printf("%d\n",reverse(482473));
    if(isPalindrome(123121)){// --> isPalindrome(12321)!=0
        printf("Yes it is palindrome");
    }
    else{
        printf("No it is not a palindrome");
    }
    return 0;
}