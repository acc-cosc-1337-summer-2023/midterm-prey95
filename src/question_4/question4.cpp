#include "question4.h"

int get_fib_sequence(int number)
{
    int total = 0, fib1 = 0, fib2 = 1;
    if(number == 1){
        number = 2;
    }
    for(int i = 0; i < number-1; i++){
        total = fib1 + fib2;
        fib1 = fib2;
        fib2 = total;
    }
    
    return total;
}