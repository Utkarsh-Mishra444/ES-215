// Online C compiler to run C program online
#include <stdio.h>
int fib(int n){
    if(n == 1)
    return 0;
    else if( n == 2)
    return 1;
    else
    return (fib(n-1) + fib(n-2) );
}
int main() {
    for(int i = 1 ; i<= 100 ; i++){
    int k = fib(i);
    printf("%d \n" , k);
    }
    return 0;
}