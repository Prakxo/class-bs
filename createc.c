#include <stdio.h>

int main(){
     int min = -32768;
     int max = 32767;
    printf("#include <stdio.h> \n");
    printf("int main(){\n");
    printf("int valor = 10; \n");
    printf("switch(valor){ \n");
    for (int i = min; i<= max; i++ ){
        printf("case %i: \n", i); //cba casting to short
        printf("printf(\"%i\"); \n", i);
        printf("break; \n");
    }
    printf("}};");

}
