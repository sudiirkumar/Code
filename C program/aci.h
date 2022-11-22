#include<math.h>
int isEven(int num){//definition
    return num%2==0?1:0;
}
int isPositive(int num){
    return num>0?1:0;
}
int square(int num){
    int square = num*num;
    return square;
}
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int reverse(int n){

}
int isArmstrong(int n){

}
int isPerfect(int n){

}
int factorial(int n){

}