#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct customer{
    char id[5];
    char *name;
    char *phone;
}CUSTMOR;

void print_info(int n,struct customer *p){
    char temp3[5];
    scanf("%s",temp3);
    int i;
    for(i=0;i<n;i++){
        if(strcmp(temp3,p[i].id)==0){
            printf("%s %s %d",p[i].name,p[i].phone,i+1);
        }
    }
}

int main(void) {
    //고객 수 입력
    int n;
    scanf("%d",&n);
    
    CUSTMOR *p=NULL;
    p=(CUSTMOR *)malloc(n*sizeof(CUSTMOR));
    
    free(p);
    
    return 0;
}
