#include "task.h"
#include <stdio.h>

int main(void) {
    char TextArray[5000];
    char creepy[]="testingcreepy";
    int wordcount = readFile("Text.txt",TextArray);
    printf("%s\n",TextArray);
    printf("wordcount:%i\n", wordcount);
    int dir = directionlogic(4,3);
    printf("direction logic : %i\n",dir);
    cReEpYtExT(creepy);
    printf("%s\n",creepy);
    printf("lcg x1= %ld\n",lcg());
    printf("lcg x2= %ld\n",lcg());
    printf("lcg x3= %ld\n",lcg());
    printf("lcg x4= %ld\n",lcg());

    return 0;
}
//nanime.yt