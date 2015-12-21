#include <stdio.h>

//TODO: Write a recursive function that computes exponents.
//This function will rely upon your multiplication function, so you should do that first!
int expt(int x, int y) {
    //Your code here
}

int main() {
    //Test multiplication:
    printf("2 * 2 = %i", mult(2, 2));
    printf("3 * 9 = %i", mult(3, 9));
    printf("-3 * 9 = %i", mult(-3, 9));
    printf("3 * -9 = %i", mult(3, -9));
    printf("-3 * -9 = %i", mult(-3, -9));
    
    //Test exponentiation:
    printf("2^8 = %i", expt(2, 8)); //should be 256
    printf("2^3 = %i", expt(2, 3)); //should be 8
    printf("(-2)^3 = %i", expt(-2, 3)); //should be -8
}