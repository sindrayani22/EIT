#include <stdio.h>
#include "task.h"
#include "task.c"



int fexist(char *filename) {
    // Loesung
    
    FILE*file;
    if(file=fopen(filename, "r"))
    {
        fclose(file);
        return 1;

    }
    return 0;

    

 
}