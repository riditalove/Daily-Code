#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int a)
    {
        data = a;
        next = NULL;
    }
    ~node()
    {
        int val = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;

        }

    }

};

node* taili(node* &head)
{

    node* temp = head;
    while((temp->next)!= NULL)
    {
        temp = temp->next;
    }

    return temp;
}

void insertAtTail(node* &tail,int val)
{
    node* temp = new node(val);
    tail->next=temp;
    tail = temp;
}

void insertAtHead(node* &head,int val)
{
    node* temp = new node(val);
    temp->next = head;
    head = temp;

}

void insertion(node* &head, int pos, int val)
{
    node* temp = new node(val);
    node* cur = head;
    int k=1;
    if(pos==0)
    {
        insertAtHead(head,val);
    }
    else
    {
        while(k<pos)
        {
            cur=cur->next;
            k++;
        }
        if(cur->next == NULL)
        {
            insertAtTail(cur,val);
        }
        else
        {
            temp->next = cur->next;
            cur->next=temp;
        }

    }

}

void deletion(int pos,node* &head)
{
    int k=1;
    node* temp = head;
    node* cur;
    if(pos==0)
    {
        node* tem = head;
        head = head->next;
        delete tem;
    }
    while(k<pos)
    {
        cur = temp;
        temp=temp->next;
        k++;
    }
    if((cur->next)->next == NULL)
    {
        temp=NULL;
    }
    else
    {
        node* t = temp->next;
        temp->next = ((temp->next)->next);
        delete t;
    }

}

void print(node* &head)
{
    node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    node* head = new node(10);
    node* tail = head;
    insertAtHead(head,69);
    insertAtHead(head,59);
    insertAtHead(head,49);

    //print(head);

    insertAtTail(tail,78);
    insertAtTail(tail,28);
    insertAtTail(tail,38);

    print(head);

    insertion(head,4,17);
    deletion(7,head);
    node* p= taili(head);
    //insertAtTail(tail,676);
    print(head);
    cout<<p->data<<endl;




}
