#include <d20/d20.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    time_t result = time((time_t*)(0));

    if(result != (time_t)(-1)){
        srand((intmax_t)result);
        if(argc == 1){
            roll_from_char_array("3d6");
        }
    }
    return 0;
}