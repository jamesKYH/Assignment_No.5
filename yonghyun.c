#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct customer{
    char id[5];
    char *name;
    char *phone;
}CUSTMOR;


int main(void) {
    //고객 수 입력
    int n;
    scanf("%d",&n);
    
    CUSTMOR *p=NULL;
    p=(CUSTMOR *)malloc(n*sizeof(CUSTMOR));
    
    free(p);
    
    return 0;
}
