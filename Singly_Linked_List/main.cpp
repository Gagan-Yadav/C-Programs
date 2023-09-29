/*
 * #include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*head= NULL;
void insert(int new_data)
{
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data : \n";
    cin>>next->data;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display() 
{

    struct node*ptr;
    ptr =head;
    while(ptr!= NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main()
{
    insert(3);
    insert(4);
    insert(5);
    cout<<"The Linked List is : ";
    display();
    return 0;
}
*/
#include<iostream>
#include<stdio.h>
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
        cout<<"\n Enter data : ";
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
        }
        cout<<"\n want  Enter more  ? Y or N \n ";
        cin>>ch;
    }while(ch=='y'|| ch == 'y');
    cout<<"\n List is created !! \n";
    
    //struct node *ptr;
    ptr =head;
    while(ptr!=NULL)
    {
    cout<<ptr->data<<endl<< "       ";
    ptr = ptr->next;
    }
}
int main()
{
    create();
    return 0;
}
