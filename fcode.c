#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodelist{
    int a;
    struct nodelist *next;
}node;



void print(node *head){
    int count=0;

    while(head!=NULL){
        printf("index: %d has value %d\n",count,head->a);
        head=head->next;
        count++;
    }


}
node *insert(){
    int n;
    node *head=NULL;
    node *temp=NULL;
    scanf("%d",&n);
    while(n!=0){
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
    scanf("%d",&n);

    }
    return head;

}




void main()
{
    int i,n,element;

    node *head=insert();

    print(head);

}
