#include <stdio.h>
__int128 max64 = 18446744073709551615;
__int128 max64T =10000000000000000000; // largest power of 10 less than largest 64 bit number;
__int128 fibhelp(int n, __int128 t1, __int128 t2){
    if(n == 1)
    return t1;
    if(n == 2)
    return t2;
    else
    return fibhelp(n-1 , t2, t1 + t2);
}
__int128 fib(int n){
    // if(n == 1)
    // return 0;
    // else if( n == 2)
    // return 1;
    // else
    // return (fib(n-1) + fib(n-2) );
    return fibhelp(n,0,1);
}
int bigprint( __int128 num){ // defining a function to print 128 bit numbers
    if(num > max64){
        __int128 front = num / 10000000000000000000;
        __int128 back = num % 10000000000000000000;
        //printf("%llu \n" , num);
        printf("%llu" , front);
        printf("%llu \n" , back);   
    }
    
}
int main() {
    for(int i = 1 ; i<= 100 ; i++){
    __int128 k = fib(i);
    if(k > max64)
    bigprint(k);
    else
    printf("%llu\n" , k);
    }
    // __int128 k = fib(93);
    // __int128 k1 = fib(95);
    // printf("%llu \n" , k);
    // printf("%llu \n" , k1);
    // bigprint(k1);
    return 0;
}
