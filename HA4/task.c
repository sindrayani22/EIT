#include "task.h"
#include <stdio.h>

// == TASK 1 ===================================================================

/**
 * @brief   Simple Function which increases values
 *
 * @return  int  Increasing Value, incremented by 1, starting at 0
 */

int increasingSemester(void) {
    // Loesung
    int a;
    if (a>2)

    {
        a=-1;
    }
    
    a+=1;

    return a;
    



}


// == TASK 2 ===================================================================

/**
 * @brief  Compares two arrays a and b - res contains the binary values from the compare operation:
 *         Element in a equal to Element in b at the same position - res at the position equals 1 otherwise 0
 * @param  a - Array of datatype double 10x10
 * @param  b - Array of datatype double 10x10
 * @param  res - Array of datatype int 10x10 - only contains ones or zeros
 */
 void compareArray(double a[10][10],double b[10][10],int res[10][10]) {
    // Loesung
     for (int i = 0; i < 10; i++)
     {
         for (int j = 0; j < 10; j++)
         {
             if (a[i][j]==b[i][j])
             {
                 res[i][j]=1;
            
             }
             else
             {
                 res[i][j]=0;
             }
            
            
         }
        
     }
    
      return 0;
 }


// == TASK 3 ===================================================================

/**
 * @brief Check array index out of bounds - if index out of bounds, the function
 *        returns 1 otherwise it returns 0
 * @param arraylength - length of array
 * @param indexvalue  - index which shall be accessed
 * @return int        - 1 if out of bounds otherwise 0
 */
int checkBounds(int arraylength, int indexvalue) {
    // Loesung
    if (indexvalue>=arraylength)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    

}


// == TASK 4 ===================================================================

/**
 * @brief Check if a certain file exist. If it exist, the function shall return 0,
 *        otherwise it shall return 1
 *        If fileoperations are used, please be aware and handle file correctly
 *        after working with it. Using fileoperations - <stdio.h> must be included
 *        in THIS file  
 * @param filename - filename which shall be looked for. 
 */

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


// == TASK 5 ===================================================================

/* Utility function for TASK 5 -> you can use the faculty function from lecture
 *  videos or from the script 1.3.3.7 -> This function should NOT be included in task.h
 */
/* UNCOMMENT FUNCTION IF YOU WANT TO USE UTILITY FUNCTION FACULTY AND IMPLEMENT IT HERE
int faculty(int val) {
    // ENTER CODE HERE
}
*/


/**
 * @brief Compute the binomialcoefficients numbers 0 <= n <= 10  and save them in coeff. 
 *        Please call the function with appropriate length: length = n + 1
 *
 * @param   coeff  given array where coefficients shall be inserted in 
 * @param   n      sets n for the binomialcoefficient
 */
void binomialcoefficients(int coeff[],int n) {
    // Loesung
    int erg=1;
    if (coeff>n-coeff)
    {
        coeff=n-coeff;

    }
    int i;
    for ( i = 0; i < coeff; i++)
    {
        erg*=(n-1);
        erg/=(i+1);
    }

    return erg;
    
    
}



