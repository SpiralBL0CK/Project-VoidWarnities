#include <stdio.h>

int main(void) {
    volatile int i , j , k, cnt;

    cnt = 0;

    while(1){
        k=0;
        for( i = 0 ; i < 10000 ; i++ ){
            for( j = 0 ; j < 10000 ; j++ ){                
                k++;
            }
        }
    printf("%d %d %d %d\n", i , j , k, cnt++);
    }
}
