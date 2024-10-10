#include <stdio.h>  
#include <stdbool.h>

bool isPrime(int x){
    if(x == 1 || x <= 0 ){
        return false;
    }

    for(int i = 2; i < x; i++){
        if(x % i == 0){
            return false;
        }
    }

    return true;  
}


