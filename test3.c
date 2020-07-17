#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct Character_Count_Pair {
    char character;
    size_t count;
} ccp;

ccp *ordered_count(const char *strin, size_t *szout) { // assign output length to szout
    int cache = 1;
    ccp *ccpout = malloc(sizeof(ccp));
    int lock,i,j;
    for(i=0;i<strlen(strin);i++) {
        lock = 0;
        for(j=0;j<cache;j++) {
            if(ccpout[j].character == strin[i]) {
                lock = 1;
                break;
            }
        }
        if(lock == 1) {
            ccpout[j].count += 1;
        }
        else {
            ccpout = (ccp*)realloc(ccpout,cache*sizeof(ccp));
            if(strin[i] == '"')
                ccpout[cache-1].character = '"';
            else
                ccpout[cache-1].character = strin[i] - 0;
            ccpout[cache-1].count = 1;
            cache++;
        }
    }
    *szout = (size_t)cache-1;
    return ccpout;
    free(ccpout);
}

int main (void) {
    char str[] = "Glimmered the white Moon-shine.\"";
    size_t szout;
    ccp *value=ordered_count(str,&szout);
    for(int i=0;i<szout;i++){
        printf("%c %d\n",value[i].character,value[i].count);
    }
    return 0;
}