#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Nodelist{
   int n;
   struct Nodelist *next;
}nodes;

nodes *insert(){
    nodes *head,*temp,*node;
    int n,count=2;
    head=NULL;
    printf("\nEnter the 1st number: ");
    scanf("%d",&n);
    while(n!=0){
        node = (nodes *)malloc(sizeof(node));
        node->n=n;
        node->next=NULL;
        if(head==NULL){
            head=node;
            temp=head;

        }
        else{
            temp->next=node;
            temp=temp->next;
        }
        printf("\nEnter the %dnd number: ",count);
        scanf("%d",&n);
        count++;
    }
    return head;


}
void output(nodes *head){
    nodes *temp=head;
    int i=1;
    while(temp!=NULL){
        printf("The %dst number is %d\n",i,temp->n);
        temp=temp->next;
        i++;
    }
}

int  main()
{
    nodes *head;
    head=insert();
    output(head);

    return 0;

}
