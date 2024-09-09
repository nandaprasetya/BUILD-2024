#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int bilangan = 0;
    scanf("%d", &bilangan);
    int hasilBil = bilangan % 2;
    if(hasilBil == 0){
        printf("Genap");        
    }else{
        printf("Ganjil");        
    }
    return 0;
}