#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodelist{
    int a;
    struct nodelist *next;
}node;

node *head=NULL;
node *temp;

void print(){
    int count=0;

    while(head!=NULL){
        printf("index: %d has value %d\n",count,head->a);
        head=head->next;
        count++;
    }

}
void insert(int n){

    node *nodes=(node *)malloc(sizeof(node));
    //entering nodes value and temporary assigning address null
    nodes->a=n;
    nodes->next=NULL;

    if(head==NULL){
        head=nodes;
        temp=head;
    }
    else{
        temp->next=nodes;
        temp=temp->next;
    }


}




void main()
{
    int i,n,element;


    printf("How many elements you want to insert?\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0; i<n; i++){
        scanf("%d",&element);
        insert(element);
    }
    print();



}
