#include <stdio.h>
#include <stdlib.h>

int main(){

    int num=15;
    int *pont;

    pont=&num;
    *pont=30;
    printf("Ponteiro de acordo com o dado: %d", *pont);
    printf("Ponteiro de acordo com o endereço de memoria: %p", *pont);
    return 0;
}