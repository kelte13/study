#include <stdlib.h>
#define MAXLINES 8
//  return dynamically allocated C-string
//  output result will be freed by tester


const char *encode_cd(unsigned char n) {

    unsigned char x = 0;
    unsigned char temp = 'P';
    char *pS = (char*)malloc(1);
    char letter = 'L';
    char previous_letter = 'P';
    *pS = 'P';
    //size_t j = 1;
    for (size_t i = 0; i < MAXLINES; i++) {
        x = n % 2;
        n = n / 2;
        if (x == 0) {
            *(pS+i+1) = previous_letter;
        }
        else {
            *(pS+i+1) = letter;
            temp = letter;
            letter = previous_letter;
            previous_letter = temp;
        }
        //j++;
   }
    return pS;

}
