#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
int main() {
   struct Node * head=NULL;
   struct Node *temp;
    int n,i,j,k,l,x;
    struct Node*curr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        curr=(struct Node*)malloc(sizeof(struct Node));
        curr->data=x;
        curr->next=NULL;
        if(head==NULL)
        {
            head=curr;
        }
        else
        {
        temp=head;
        //dealing with address
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=curr;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    // CIRCULAR LINKED LIST
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    while(head!=NULL)
    {
        printf("%ds",head->data);
        head=head->next;
    }
   
}
