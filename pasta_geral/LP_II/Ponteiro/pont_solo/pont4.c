#include <stdio.h>
#include <stdlib.h>

int main(){

    int num=12;
    int *p =&num;
    int *q=p;
    
    *q=25;
    (*p)++;
    
    printf("%d", *p);
    return 0;
}

// dará 26