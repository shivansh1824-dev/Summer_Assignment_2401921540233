#include<stdio.h>
#include<stdlib.h>
struct file{
    int id;
    int block;
    struct file *next_block;
};
typedef struct file f;
int main(){
    f*file1,*temp,*temp2;
    int i=1,j,count;
    printf("enter the no. of blocks for file %d",i);
    scanf("%d",&count);
    for(j=0;j<count;j++){
        if(j==0){
            temp=(f*)malloc(sizeof(f));
            temp->id=i;
            temp->block=j;
            temp->next_block=NULL;
            file1=temp;
            printf("%d\t",i);
        }else{
            temp=file1;
            while ( temp->next_block != NULL)
            temp=temp->next_block;
            temp2=(f*)malloc(sizeof(f));
            temp2->id=i;
            temp2->block=j;
            temp2->next_block=NULL;
            temp->next_block = temp2;
            printf("%d\t",i);
        }
    }
    printf("\nHere is the disk allocation for file:\n");
    temp=file1;
    while(temp!=NULL){
        printf("file id:%d\t block answer:%d\t block address:%d\n",temp->id,temp->block,(int)temp);
        temp=temp->next_block;
    }
    return 0;
}