#include <stdio.h>

int main(){
     int min = -32768;
     int max = 32767;
    printf("#include <stdio.h> \n");
    printf("#include <stdlib.h> \n");
    printf("#include <time.h> \n");
    printf("int main(){\n");
    printf("srand(time(NULL));");
    printf("int nu = (rand() %% (%d +1 - %d  ) + %d);", max, min, min);
    printf("switch(nu){ \n");
    for (int i = min; i<= max; i++ ){
        printf("case %i: \n", i); //cba casting to short, changed variables instead.
        printf("printf(\"%i\\n\"); \n", i);
        printf("break; \n");
    }
    printf("}};");

}
