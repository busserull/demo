#include <stdio.h>

int main(int argc, char ** argv){
    if(argc < 1){
        return 1;
    }

    printf("Hei %s\n", argv[1]);

    return 0;
}
