
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "lab.h"

#define UNUSED(x) (void)x

char * toNum(char text){
    char input = tolower(text);
    switch (input) {
        case 'a':
            return (char *)"1023";
            break;
        case 'b':
            return (char *)"20101013";
            break;
        case 'c':
            return (char *)"20102013";
            break;
        case 'd':
            return (char *)"201013";
            break;
        case 'e':
            return (char *)"103";
            break;
        case 'f':
            return (char *)"10102013";
            break;
        case 'g':
            return (char *)"2010103";
            break;
        case 'h':
            return (char *)"101010103";
            break;
        case 'i':
            return (char *)"10103";
            break;
        case 'j':
            return (char *)"102020203";
            break;
        case 'k':
            return (char *)"2010203";
            break;
        case 'l':
            return (char *)"102010103";
            break;
        case 'm':
            return (char *)"20203";
            break;
        case 'n':
            return (char *)"20103";
            break;
        case 'o':
            return (char *)"2020203";
            break;
        case 'p':
            return (char *)"102020103";
            break;
        case 'q':
            return (char *)"202010203";
            break;
        case 'r':
            return (char *)"1020103";
            break;
        case 's':
            return (char *)"1010103";
            break;
        case 't':
            return (char *)"203";
            break;
        case 'u':
            return (char *)"1010203";
            break;
        case 'v':
            return (char *)"101010203";
            break;
        case 'w':
            return (char *)"1020203";
            break;
        case 'x':
            return (char *)"201010203";
            break;
        case 'y':
            return (char *)"201020203";
            break;
        case 'z':
            return (char *)"202010103";
            break;
        case '0':
            return (char *)"20202020203";
            break;
        case '1':
            return (char *)"10202020203";
            break;
        case '2':
            return (char *)"10102020203";
            break;
        case '3':
            return (char *)"10101020203";
            break;
        case '4':
            return (char *)"10101010203";
            break;
        case '5':
            return (char *)"10101010103";
            break;
        case '6':
            return (char *)"20101010103";
            break;
        case '7':
            return (char *)"20201010103";
            break;
        case '8':
            return (char *)"20202010103";
            break;
        case '9':
            return (char *)"20202020103";
            break;
        default:
            printf("invalid character was entered");
            return (char *)'\0';
            break;
    }
}

char * toChar(char *text){
    if (strcmp(text, "1023") == 0) return (char *)"a";
    else if (strcmp(text, "20101013") == 0) return (char *)"b";
    else if (strcmp(text, "20102013") == 0) return (char *)"c";

    else if (strcmp(text, "201013") == 0) return (char *)"d";
    else if (strcmp(text, "103") == 0) return (char *)"e";
    
    else if (strcmp(text, "10102013") == 0) return (char *)"f";
    else if (strcmp(text, "2010103") == 0) return (char *)"g";
    
    else if (strcmp(text, "101010103") == 0) return (char *)"h";
    else if (strcmp(text, "10103") == 0) return (char *)"i";
    
    else if (strcmp(text, "102020203") == 0) return (char *)"j";
    else if (strcmp(text, "2010203") == 0) return (char *)"k";
    
    else if (strcmp(text, "102010103") == 0) return (char *)"l";
    else if (strcmp(text, "20203") == 0) return (char *)"m";

    else if (strcmp(text, "20103") == 0) return (char *)"n";
    else if (strcmp(text, "2020203") == 0) return (char *)"o";

    else if (strcmp(text, "102020103") == 0) return (char *)"p";
    else if (strcmp(text, "202010203") == 0) return (char *)"q";

    else if (strcmp(text, "1020103") == 0) return (char *)"r";
    else if (strcmp(text, "1010103") == 0) return (char *)"s";

    else if (strcmp(text, "203") == 0) return (char *)"t";
    else if (strcmp(text, "1010203") == 0) return (char *)"u";

    else if (strcmp(text, "101010203") == 0) return (char *)"v";
    else if (strcmp(text, "1020203") == 0) return (char *)"w";
    else if (strcmp(text, "201010203") == 0) return (char *)"x";

    else if (strcmp(text, "201020203") == 0) return (char *)"y";
    else if (strcmp(text, "202010103") == 0) return (char *)"z";
    
    else if (strcmp(text, "20202020203") == 0) return (char *)"0";
    else if (strcmp(text, "10202020203") == 0) return (char *)"1";
    
    else if (strcmp(text, "10102020203") == 0) return (char *)"2";
    else if (strcmp(text, "10101020203") == 0) return (char *)"3";
    
    else if (strcmp(text, "10101010203") == 0) return (char *)"4";
    else if (strcmp(text, "10101010103") == 0) return (char *)"5";
    
    else if (strcmp(text, "20101010103") == 0) return (char *)"6";
    else if (strcmp(text, "20201010103") == 0) return (char *)"7";
    
    else if (strcmp(text, "20202010103") == 0) return (char *)"8";
    else if (strcmp(text, "20202020103") == 0) return (char *)"9";
    else return (char *)'\0';
}

char * textToBinary(char *text){
    char *head = text;
    char *rVal = (char *) malloc(1);

    while((*head != '\0')){
        char *temp = toNum(*head);
        if(*temp == '\0') return NULL;
        int size = strlen(rVal) + strlen(temp);
        char *cat = (char *) malloc(size);

        strcpy(cat, rVal);
        strcat(cat, temp);
        free(rVal);
        rVal = cat;

        head++;
    }
    return rVal;
}

int go(int argc, char **argv){
    UNUSED(argc);
    UNUSED(argv);

    char *text = (char *)"abc";
    printf("%s\n", text);
    char *result = textToBinary(text);
    printf("result: %s\n", result);

    return 0;
}