#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    if(((N/1000) == (N%10)) && (((N%1000)/100) == ((N%1000)/100))) {
        printf("True");

    }
    else{
        printf("False");
    }

    return 0;
}
