// Name    : Sameer Yasin
// PRN     : 24070123092
// Division: B1
// Experiment: 10A

#include <iostream>
#include <cstdio>
using namespace std; 

void swap_by_value(int a , int b){
    int temp = a; 
    a = b;
    b = temp; 
}

int main() {
    int a = 10;
    int b = 20;

    printf("Swap by value : ");
    printf("\nNumbers before swaping : %d , %d " , a , b);
    swap_by_value(a,b);
    printf("\nNumbers after swaping : %d , %d " , a , b);
    return 0;
}

/* (does not work because local variables)
OUTPUT ::

Name    : Sameer Yasin
PRN     : 24070123092
Division: B1

Swap by value : 
Numbers before swaping : 10 , 20 
Numbers after swaping : 10 , 20 
*/
