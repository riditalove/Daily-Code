#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;

    node()
    {
        next = NULL;
    }

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


void print(node* &head)
{
    node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

unordered_map<int,int>m;

node* head;

void insertAtTail(node* &tail,int val)
{



    node* temp = new node(val);
    tail->next=temp;
    tail = temp;

}

int main()
{
    head = new node(10);
    node* tail = head;

    insertAtTail(tail,28);
    insertAtTail(tail,38);
    insertAtTail(tail,48);
    insertAtTail(tail,58);
    insertAtTail(tail,228);
    insertAtTail(tail,338);
    insertAtTail(tail,548);
    //insertAtTail(tail,858);
    // print(head);

    /*node* head1 = new node(15);
    node* tail1 = head1;

    insertAtTail(tail1,28);
    insertAtTail(tail1,35);
    insertAtTail(tail1,103);
    insertAtTail(tail1,203);
    // print(head1);
    node* cur = head;
    node* cur1 = head1;
    node* prev=head;
    node* save;
    while(cur!=NULL && cur1!=NULL)
    {
        if((cur->data)<=(cur1->data))
        {
            prev = cur;
            //cout<<"PREVvv  "<<prev->data<<endl;
            cur=cur->next;
        }
        else
        {
            //cout<<"OK "<<prev->data<<endl;
            save = cur1->next;
            //cout<<save->data<<endl;
            prev->next = cur1;
            prev = cur1;
            prev->next = cur;
            //cout<<cur1->data<<endl;
            cur1=save;



        }

    }
    if(cur1!=NULL)
    {
        //cout<<"EKLH"<<endl;
        prev->next = cur1;
    }*/
    vector<node*>v;
    node* current = head;
    while(current!=NULL)
    {
        v.push_back(current);
        current=current->next;
    }
    int s = v.size();
    for(int i=0;i<s;i++)
    {
        v[i]->next = v[(s-1)-i];
        v[(s-1)-i]->next = v[i+1];
        if(i+1==(s/2))
        {
            v[i+1]->next=NULL;
            break;
        }
    }

    print(head);





}
