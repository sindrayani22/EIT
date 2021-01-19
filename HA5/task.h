#ifndef TASK_H
#define TASK_H

#define MULTIPLIER 397204094
#define OFFSET 0
#define MODULOCONST 2147483647
#define SEED 58854338

unsigned long lcg(void);
int directionlogic(int is, int target);
int readFile(char filename[],char textarray[5000]);
void cReEpYtExT(char text[]);
void printTime(void);


#endif // TASK_H