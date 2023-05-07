#include <stdlib.h>


char * toNum(char text);
/**
 * This function takes in text and convert it to numbers that represents different actions,
 * 0 represent a space and a 1 represents a dits, a dahs is represented by 2 dahs, a leters are seperated by 3,
 * and words are seperated by 4
 * @param text
 * @return 
 */
char * textToNum(char *text);

/**
 * This takes a sequance that represents different morce code actions and convert it to text
 * @param text
 * @return 
 */
char * numToText(char *binary);

/**
 * 
 */
int go(int argc, char **argv);