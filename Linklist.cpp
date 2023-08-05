


#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node()
    {
        data=0;
        next=NULL;

    }
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class linkedlist
{

    node* head;

public:
    linkedlist()
    {
        head=NULL;
    }
    void insertnode(int data);
    void printlist();
    void deletenode(int nodeoffset);
};

void linkedlist:: insertnode (int data)
{
    node* newnode=new node(data);

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void linkedlist::printlist ()
{
    node* temp=head;

    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void linkedlist:: deletenode(int nodeoffset)
{
    node *temp1=head,*temp2=NULL;
    int listlen=0;

    if(head==NULL)
    {
        cout<<"List empty";
        return;
    }

    while(temp1!=NULL)
    {
        temp1=temp1->next;
        listlen++;
    }

    if(listlen<nodeoffset)
    {
        cout<<"index out of range";
    }
    temp1=head;
    if(nodeoffset==1)
    {
        head=head->next;
        delete temp1;
        return;
    }
    while(nodeoffset-->1)
    {
        temp2=temp1;
        temp1=temp1->next;

    }
    temp2->next=temp1->next;
    delete temp1;
}
int main()
{
    int ch,d,i;
    linkedlist l;

    cout << "_MENU_"<<endl;
    cout<<"1.Insert the Node"<<endl;
    cout<<"2.Display the list "<<endl;
    cout<<"3.Delete the the Node"<<endl;
    cout<<"4.EXIT"<<endl;

    do
    {
        cout<<endl<<"Enter the Choice:- ";
        cin>>ch;

        switch (ch)
        {

        case 1:
        {
            cout<<"Enter the data:- ";
            cin>>i;
            l.insertnode(i);
            break;
        }
        case 2:
        {
            cout<<"List is:- ";
            l.printlist();
            break;
        }
        case 3:
        {
            cout<<"Delete the node:- ";
            cin>>d;
            l.deletenode(d);
            break;
        }
        case 4:
        {
            cout<<"EXIT";
            break;
        }
        default:
        {
            cout<<"Invalid choice";
            break;
        }
        }

    } while(ch!=4);
    return 0;
}
