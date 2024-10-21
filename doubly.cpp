#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int value;
    node* next;
    node* prev;

    node(int a)
    {
        value = a;
        next = NULL;
        prev = NULL;
    }
    ~node()
    {
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void print(node* &head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }

}

void insertAtHead(int val,node* &head)
{
    node* current = new node(val);
    current->next = head;
    head->prev = current;
    head=current;
}

void insertAtTail(int val,node* &tail)
{
    node* temp = new node(val);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void insertion(int val, node* &head, node* &tail,int pos)
{
    int k=1;
    node* temp = new node(val);
    node* cur = head;
    if(pos==0)
    {
        insertAtHead(val,head);
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
            cur->next = temp;
            temp->prev = cur;
            tail = temp;
        }
        else
        {
            temp->next = cur->next;
            cur->next = temp;
            temp->prev = cur;
        }

    }

}

void deletion(int pos,node* &head)
{
    int k=1;
    node* temp = head;
    if(pos==0)
    {
        (head->next)->prev=NULL;
        head=head->next;
        temp->next = NULL;
        delete temp;

    }
    else
    {
        while(k<pos)
        {
            temp=temp->next;
            k++;
        }
        node* rem = temp->next;
        if(rem->next == NULL)
        {
            temp->next = NULL;
            rem->prev = NULL;

        }
        else
        {
           node* rem = temp->next;
           temp->next = rem->next;
           (rem->next)->prev = temp;
           rem->next = NULL;
           rem->prev = NULL;

        }
        delete rem;


    }


}

int main()
{
    node* nodel = new node(10);
    node* head = nodel;
    node* tail = nodel;
    insertAtHead(78,head);
    insertAtHead(780,head);
    insertAtTail(7786,tail);
    insertion(675,head, tail,4);print(head);
    cout<<"----------------"<<endl;

    deletion(4,head);
    print(head);

    //cout<<tail->value<<endl;
}
