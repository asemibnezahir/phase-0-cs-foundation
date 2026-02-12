#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int val;
    struct Node* next;
}Node;
Node* head=NULL;
Node* tail=NULL;
int sz=0;
void insert_first(Node** head,Node** tail,int x)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }
    newNode->val=x;
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head=newNode;
        *tail=newNode;
        printf("Value %d has added on the 1st Position Successfully\n",x);
        sz++;
        return;
    }
    newNode->next=*head;
    *head=newNode;
    printf("Value %d has added on the 1st Position Successfully\n",x);
    sz++;
}
void insert_last(Node** head,Node** tail,int x)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }
    newNode->val=x;
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head=newNode;
        *tail=newNode;
        printf("Value %d has added on the last Position Successfully\n",x);
        sz++;
        return;
    }
    (*tail)->next=newNode;
    *tail=newNode;
    printf("Value %d has added on the last Position Successfully\n",x);
    sz++;
}
void insert_any_pos(Node** head,Node** tail,int idx,int x)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }
    newNode->val=x;
    newNode->next=NULL;
    if(*head==NULL)
    {
        printf("List is Empty!! Try With Another Insertion Operation\n");
        return;
    }
    if(idx<1||idx>sz+1)
    {
        printf("Invalid Input Position\n");
        return;
    }
    if(idx==1)
    {
        insert_first(head, tail, x);
        return;
    }
    Node* tmp=*head;
    for(int i=1;i<idx-1;i++)
    {
        if(tmp==NULL)
        {
            printf("Invalid Input Position\n");
            return;
        }
        tmp=tmp->next;
    }
    if(tmp->next==NULL)
    {
        insert_last(head,tail,x);
        return;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    if(newNode->next==NULL)
    {
        *tail=newNode;
    }
    printf("Value %d has added on Position No-%d Successfully\n",x,idx);
    sz++;
}
void delete_first(Node **head,Node **tail)
{
    if(*head==NULL)
    {
        printf("Can't Delete, Empty List\n");
        return;
    }
    int delval=(*head)->val, flag=0;
    Node* delNode=*head;
    *head=(*head)->next;
    if(*head==NULL)
    {
        *tail=NULL;
        flag=1;
    }
    free(delNode);
    if(!flag)
    {
        printf("The First Node deleted successfully, Deleted value is %d\n",delval);
    }
    else
    {
        printf("Last Remaining Node deleted Successfully, Deleted value is %d. Now List is empty\n",delval);
    }
    sz--;
}
void delete_last(Node **head,Node **tail)
{
    if(*head==NULL)
    {
        printf("Can't Delete, Empty List\n");
        return;
    }
    int delval=(*tail)->val;
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
        *tail=NULL;
        printf("Last Remaining Node deleted Successfully, Deleted value is %d. Now List is empty\n",delval);
        sz--;
        return;
    }
    Node* tmp=*head;
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    Node* delNode=tmp->next;
    tmp->next=NULL;
    *tail=tmp;
    free(delNode);
    printf("The Last Node deleted successfully, Deleted value is %d\n",delval);
    sz--;
}
void delete_any_pos(Node **head,Node **tail,int idx)
{
    if(*head==NULL||idx<1||idx>sz)
    {
        printf("Position Invalid\n");
        return;
    }
    if(idx==1)
    {
        delete_first(head,tail);
        return;
    }
    Node* tmp=*head;
    for(int i=1;i<idx-1;i++)
    {
        if(tmp->next==NULL)
        {
            printf("Position Invalid\n");
            return;
        }
        tmp=tmp->next;
    }
    int delval=tmp->next->val;
    if(tmp->next->next==NULL)
    {
        delete_last(head,tail);
        return;
    }
    Node* delNode=tmp->next;
    tmp->next=delNode->next;
    free(delNode);
    printf("Value %d has Deleted from Position No-%d Successfully\n",delval,idx);
    sz--;
}
int size()
{
    return sz;
}
int search(Node** head,int val)
{
    Node* tmp=*head;
    int pos=1;
    while(tmp!=NULL)
    {
        if(tmp->val==val)
        {
            return pos;
        }
        tmp=tmp->next;
        pos++;
    }
    return 0;
}
void update(Node** head,int val,int updated)
{
    Node* tmp=*head;
    int pos=1;
    while(tmp!=NULL)
    {
        if(tmp->val==val)
        {
            tmp->val=updated;
            printf("Value has Updated Successfully at Positon-%d\n",pos);
            printf("Previous Value was %d & Updated Value is %d\n",val,updated);
            return;
        }
        tmp=tmp->next;
        pos++;
    }
    printf("Value isn't available, can't update\n");
}
void display(Node *head)
{
    Node* tmp=head;
    if(tmp==NULL)
    {
        printf("List is empty!! Nothing to Display\n");
        return;
    }
    printf("List: ");
    while(tmp!=NULL)
    {
        if(tmp->next==NULL)
        {
            printf("%d\n",tmp->val);
            return;
        }
        printf("%d -> ",tmp->val);
        tmp=tmp->next;
    }
}
void display_reverse(Node* head, Node* tail, Node* tmp)
{
    if(head==NULL)
    {
        printf("List is empty!! Nothing to Display\n");
        return;
    }
    if(tmp==NULL)
    {
        printf("Reverse List: ");
        return;
    }
    display_reverse(head,tail,tmp->next);
    if(tmp==head)
    {
        printf("%d\n",tmp->val);
        return;
    }
    printf("%d <- ",tmp->val);
}
int main()
{
    int choice,val,pos,updated;
    while(1)
    {
        printf("\n===== Linked List Operations =====\n");
        printf("\n1. Insert First\n");
        printf("2. Insert Last\n");
        printf("3. Insert Any Position\n");
        printf("4. Delete First\n");
        printf("5. Delete Last\n");
        printf("6. Delete Any Position\n");
        printf("7. Search Value\n");
        printf("8. Update Value\n");
        printf("9. Display List\n");
        printf("10. Display Reverse\n");
        printf("11. List Size\n");
        printf("12. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&val);
                insert_first(&head,&tail,val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d",&val);
                insert_last(&head,&tail,val);
                break;
            case 3:
                printf("Enter position: ");
                scanf("%d",&pos);
                printf("Enter value: ");
                scanf("%d",&val);
                insert_any_pos(&head,&tail,pos,val);
                break;
            case 4:
                delete_first(&head,&tail);
                break;
            case 5:
                delete_last(&head,&tail);
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d",&pos);
                delete_any_pos(&head,&tail,pos);
                break;
            case 7:
                printf("Enter value to search: ");
                scanf("%d",&val);
                int res=search(&head,val);
                if(res==0)
                {
                    printf("Value not found\n");
                }
                else
                {
                    printf("Value found at position %d\n",res);
                }
                break;
            case 8:
                printf("Enter old value: ");
                scanf("%d",&val);
                printf("Enter new value: ");
                scanf("%d",&updated);
                update(&head,val,updated);
                break;
            case 9:
                display(head);
                break;
            case 10:
                display_reverse(head,tail,head);
                break;
            case 11:
                printf("Current Linked List Size = %d\n",size());
                break;
            case 12:
                printf("Program Ended.\n");
                exit(0);
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}

