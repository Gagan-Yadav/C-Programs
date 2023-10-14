


#include <stdio.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create()
{
    struct node *ptr, *current;
    char ch;
    ptr = NULL; current
 = NULL;
    cout<<"WE are creating a linked list now : \n";
    head = NULL;
    do
    {
        ptr = (struct node*) malloc(sizeof(struct node));
        if(ptr == NULL)
        {
            cout<<"\n MEmory not available !!";
            return;
        }
        cout<<" Enter data : ";
        cin>>ptr->data;
        ptr->next = NULL;
        if(head == NULL)
        {
            head= ptr;
            current = ptr;
        }
        else
        {
            current->next = ptr;
            current = ptr;
            current->next  = head;
        }
        cout<<" \n \n want  Enter more  ? Y or N \n ";
        cin>>ch;
    }while(ch=='y'|| ch == 'y');
    cout<<"\n List is created !! "<<endl;
    
    //struct node *ptr;
    ptr =head;
    node *temp = head;
    while(temp->next!=head)
    {
    cout<<temp->data<<endl<<"  ";
    temp = temp->next;
    }
    cout<<temp->data<<endl<<"  ";
}
int main()
{
    create();
    return 0;
}
