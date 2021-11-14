#include <stdio.h>

int main(void) {
    volatile int i , j , k, cnt;

    cnt = 0;

    while(1){
        for( i = 0  i < 10000 ; i++ ){

            for( i = 0  i < 10000 ; i++ ){                
                k++;
        
        }

    }

    printf("%d %d %d %d\n", i , j , k, cnt);
}