#include <stdio.h>

int main(){
    printf("Welcome to CSCI3250 World\nI will now print first 10 Fibonacci Number\n");
    int i, n = 10, t1 = 0, t2 = 1, nextTerm;
    for (i = 1; i <= n; ++i) //runs iteration from 1 to 10.
    {
        printf("%d ", t1);  //prints 0 (first number)
        nextTerm = t1 + t2;  //prints 1 (second number)
        t1 = t2;             //t1 becomes the next number (t2)
        t2 = nextTerm;       //t2 becomes the nextTerm.
    }
    return 0;
}
