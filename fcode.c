#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodelist{
    int a;
    struct nodelist *next;
}node;

node *read(){
    node *head=NULL;
    int a;
    scanf("%d",&a);
    while(a!=0){
        node *n=(node *)malloc(sizeof(node));

        n->a=a;
        n->next=NULL;
        if(head==NULL){
            head=n;
        }
        else{
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
        }
        scanf("%d",&a);
    }
    return head;

}
void print(node *head){
    int count=0;

    while(head!=NULL){
        printf("index: %d has value %d\n",count,head->a);
        head=head->next;
        count++;
    }

}
void insert(node *head){
    int i=0,a,num;

    printf("Which index You want to insert?\n");
    scanf("%d",&num);
    printf("Enter the new value\n");
    scanf("%d",&a);
    node *n=(node *)malloc(sizeof(node));
    n->a=a;
    while(i<num-1){
        head=head->next;
         ++i;

    }
    node *temp=(node *)malloc(sizeof(node));
    temp=head->next;
    head->next=n;
    n->next=temp;

}
void del(node *head){
    int i=0,num;

    printf("Which index You want to delete?\n");
    scanf("%d",&num);

    while(i<num-1){
        head=head->next;
         ++i;

    }
    node *a=head->next;
    node *b=a->next;
    head->next=b;
}



void main()
{
    node *head;

    head=read();
    insert(head);
    print(head);
    del(head);
    print(head);



}
