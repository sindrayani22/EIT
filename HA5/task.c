#include "task.h"
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>




// == TASK 1 ===================================================================

/**
 * @brief lcg (linear congruential generator) - Generates (pseudo)random numbers with respect to
 *                                              MULTIPLIER  (Symbolic constant from task.h)
 *                                              OFFSET      (Symbolic constant from task.h)
 *                                              MODULOCONST (Symbolic constant from task.h)
 *                                              SEED        (Symbolic constant from task.h)
 *
 * @return pseudorandom number based on the above constants
 */
unsigned long lcg(void) {
    static unsigned long xk1= SEED;
    xk1= (MULTIPLIER*(xk1)+OFFSET)%MODULOCONST;
    return xk1;

}

// == TASK 2 ===================================================================

/**
 * @brief directionlogic - This function returns the smallest angle between the is and
 *                         the target. The returned angle can be smaller than zero, for 
 *                         counter clockwise directions. 
 *                         If a function from the <stdlib.h> is used, the header file 
 *                         must be included in this file.
 *
 * @param   is      actual angle
 * @param   target  target angle
 *
 * @return                 delta angle between is and target with respect to smallest
 *                         possible angle
 */
int directionlogic(int is, int target) {
    int delta;
    delta=target-is;
    return delta;
}


// == TASK 3 ===================================================================

/**
 * @brief readFile - This function reads the content of a file into a characterarray (MAX 5000 Character)
 *                   In addition, the function returns the number of read characters. Line breaks will be 
 *                   counted as two characters
 * 
 * @param filename[]  Name of file which shall be read 
 * @param textarray[] Charakterarray with a maximum of 5000 characters, where the read characters from file 
 *                    shall be stored
 * @return            Number of characters read from file
 */
int readFile(char filename[],char textarray[5000]) {
    FILE *filePointer;
    char char_item;

    filePointer = fopen(filename, "r");
    int word_counter=0;
    while ((char_item = fgetc(filePointer)) != EOF)
        {
            textarray[word_counter]= char_item;
            word_counter++;
        }
    
    word_counter++;
    return word_counter;

}


// == TASK 4 ===================================================================

/**
 * @brief cReEpYtExT - Changes a normal text into cReEpY TeXt. If the Index of text[] 
 *                     is even (0 counts as even), if there is a character, it must be
 *                     small. If the index is odd, if there is a character at the index,
 *                     the character must be big. 
 *                     In this function, you can use functions from <ctype.h>. If functions
 *                     from <ctype.h> will be used, the header file must be included in this file.
 *
 * @param   text[]     Textarray which shall be changed into creepy text
 *
 */
void cReEpYtExT(char text[]) {
    int i=0;
    while (!(text[i]=='\0'))
    {
        if (i%2)
        {
            if (isalpha(text[i]))
            {
                if (islower(text[i]))
                {
                     text[i]= (char)toupper(text[i]);
                }
            }
            i++;  
        }else{
            if (isalpha(text[i]))
            {
                if (isupper(text[i]))
                {
                     text[i]= (char)tolower(text[i]);
                }
            }
            i++;       
        }  

    }
}


// == TASK 5 ===================================================================

/**
 * @brief printTime - This function prints out the actual date and time in a specific
 *                    format in terminal. printf IS ALLOWED AND MUST BE USED!
 *                    The use of <time.h> is necessary. Use the functions time(...) and
 *                    localtime(...) to fulfill this task. The Format is as follows:
 * 
 *                    YYYY/MM/DD - HH:MM:SS Uhr 
 * 
 * Format Description 
 *                    YYYY -> Year
 *                    MM   -> Month
 *                    DD   -> Day
 *                    HH   -> Hours
 *                    MM   -> Minutes
 *                    SS   -> Seconds
 * LEADING ZEROS MUST BE INCLUDED 
 */
void printTime(void) {
    time_t time_start=0;
    char platzhalter[100];
    time(&time_start);

    struct tm *time_info=localtime(&time_start);

    strftime(platzhalter, 100, "%Y/%m/%d - %H:%M:%S", time_info);

    printf("%s Uhr\n", platzhalter ); 

}




















