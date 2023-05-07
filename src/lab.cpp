
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "lab.h"

#define UNUSED(x) (void)x

char * toNum(char text){

    char input = tolower(text);
    switch (input) {
        case 'a':
            return "1023";
            break;
        case 'b':
            return "20101013";
            break;
        case 'c':
            return "20102013";
            break;
        case 'd':
            return "201013";
            break;
        case 'e':
            return "103";
            break;
        case 'f':
            return "10102013";
            break;
        
        default:
            printf("invalid character was entered");
            return NULL;
            break;
    }
}

char * textToBinary(char *text){
    char *head = text;
    char *rVal = NULL;

    while((*head != '\0')){
        char *temp = toNum(*head);
        if(*temp == NULL) return NULL;

        int size = strlen(rVal) + strlen(temp);
        char *cat = (char *) malloc(size);
        strcpy(cat, rVal);
        strcat(cat, temp);
        free(rVal);
        rVal = cat;
    }
    return rVal;
}

int go(int argc, char **argv){
    UNUSED(argc);
    UNUSED(argv);
    printf("it works");
    return 0;
}