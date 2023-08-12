#include<stdio.h>
#include<conio.h>
int main(){

    //Sum and count of prime between 1 and n
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int count = 0;
    // int sum = 0;
    // for(int num=2;num<=n;num++){
    //     int isPrime = 1;//1 -> True  and 0 -> False
    //     for(int i=2;i<=num-1;i++){
    //         if(num%i==0){
    //             isPrime = 0;
    //             break;
    //         }
    //     }
    //     if(isPrime==1){
    //         printf("%d ",num);
    //         sum += num;
    //         count++;
    //     }
    // }
    // printf("\n\nCount of prime numbers until %d: %d",n,count);
    // printf("\nSum of prime numbers until %d: %d",n,sum);


    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int isPrime = 1;//1 -> True  and 0 -> False
    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if(isPrime==1 && n!=1){
    //     printf("%d is prime number",n);
    // }
    // else{
    //     printf("%d is not a prime number",n);
    // }


    //HCF and LCM
    // int a,b;
    // printf("Enter 2 numbers: ");
    // scanf("%d%d",&a,&b);
    // int hcf;
    // int minm = (a>b)?b:a;
    // // 1 <= i <= minm
    // for(int i = minm;i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         hcf = i;
    //         break;
    //     }
    // }
    // int maxm = (a>b)?a:b;
    // int lcm;
    // for(int i=maxm;i<=a*b;i++){
    //     if(i%a==0 && i%b==0){
    //         lcm = i;
    //         break;
    //     }
    // }
    // printf("\nHCF: %d\nLCM: %d",hcf,lcm);

    //Factorial
    // 5! = 5*4*3*2*1 = 1*2*3*4*5
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int ans = 1;
    // for(int i=1;i<=n;i++){
    //     ans = ans*i;
    // }
    // printf("(%d)! = %d",n,ans);

    //Factors of a number
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // printf("\nFactors are: \n");
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         printf("%d ",i);
    //     }
    // }
    
    //Power using loop
    // int base = 2;
    // int exp = 5;
    // int ans = 1;
    // for(int i=1;i<=exp;i++){
    //     ans = ans*base;
    // }
    // printf("%d to the power %d is %d",base,exp,ans);

    //Digits
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int sum = 0;
    // int product = 1;
    // while(n>0){//n!=0
    //     int l_dig = n%10;
    //     printf("%d ",l_dig);
    //     sum += l_dig;
    //     product *= l_dig;
    //     n = n/10;
    // }
    // printf("\nSum of digits is %d.",sum);
    // printf("\nProduct of digits is %d.",product);

    
    //Multiplication table
    // 4 * 1 = 4
    // 4 * 2 = 8
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=10;i++){
    //     printf("\n%2d * %2d = %2d",n,i,n*i);
    // }
    
    //ASCII value = characters are mapped with a number -> A = 65, B = 66, ...
    // for(int c = 0;c<128;c++){
    //     printf("%c ",c);
    // }
    

    //Print and sum of numbers
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int natural_sum = 0;
    // printf("\nNatural numbers: \n");
    // for(int i=1;i<=n;i++){
    //     printf("%d ",i);
    //     natural_sum += i;
    // }
    // printf("\nSum of natural number: %d",natural_sum);
    // int odd_sum = 0;
    // printf("\nOdd numbers: \n");
    // for(int i=1;i<=n;i+=2){
    //     printf("%d ",i);
    //     odd_sum += i;
    // }
    // printf("\nSum of odd number: %d",odd_sum);
    // int even_sum = 0;
    // printf("\nEven numbers: \n");
    // for(int i=2;i<=n;i+=2){
    //     printf("%d ",i);
    //     even_sum += i;
    // }
    // printf("\nSum of even number: %d",even_sum);
    // int reverse_sum = 0;
    // printf("\nNatural reverse numbers: \n");
    // for(int i=n;i>=1;i--){
    //     printf("%d ",i);
    //     reverse_sum += i;
    // }
    // printf("\nSum of reverse number: %d",reverse_sum);
    return 0;
}