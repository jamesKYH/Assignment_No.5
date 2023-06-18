#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct customer{
    char id[5];
    char *name;
    char *phone;
}CUSTMOR;

void save_info(int n,struct customer *p){
    int i,j;
    int len1,len2;
    char temp1[100],temp2[100];
    for(i=0;i<n;i++){
        scanf("%s %s",temp1,temp2);
        len1=(int)strlen(temp1);
        len2=(int)strlen(temp2);
        p[i].name=(char *)malloc((len1+1)*sizeof(char));
        p[i].phone=(char *)malloc((len2+1)*sizeof(char));
        strcpy(p[i].name,temp1);
        strcpy(p[i].phone,temp2);
        int k=9;
        for(j=0;j<5;j++){
            p[i].id[j]=p[i].phone[k];
            k+=1;
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
