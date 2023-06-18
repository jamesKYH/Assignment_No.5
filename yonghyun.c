#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct customer{
    char id[5];
    char *name;
    char *phone;
    struct customer *next;
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
        char temp3[5];
        int k=0;
        for(j=9;j<len2;j++){
            temp3[k]=temp2[j];
            k+=1;
        }
        temp3[k]='\0';
        strcpy(p[i].id,temp3);
    }
    for(i=0;i<n;i++){
         for(j=i;j<n;j++){
             if(i!=j&&p[i].id[3]==p[j].id[3]){
                 p[i].next=p+j;
                 break;
             }
             else if(j==n-1){
                 p[i].next=NULL;
             }
         }
     }
}
void print_info(int n,struct customer *p){
    int k,i;
     scanf("%d",&k);
     
    int answer=0;
    for(i=0;i<n;i++){
        if(k%10==(int)atoi(&p[i].id[3])){
            answer=i;
            break;
        }
    }
      
    CUSTMOR *q;
    for(q=p+answer,i=1;q<p+n;q=q->next,i++){
         if(k==(int)atoi(q->id)){
             printf("%s %s %d\n",q->name,q->phone,i);
             break;
         }
     }
}

int main(void) {
    //고객 수 입력
    int n;
    scanf("%d",&n);
    
    CUSTMOR *p=NULL;
    p=(CUSTMOR *)malloc(n*sizeof(CUSTMOR));
    
    save_info(n,p);
    print_info(n,p);
    free(p);
    
    return 0;
}
