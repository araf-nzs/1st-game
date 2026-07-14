#include<bits/stdc++.h>
using namespace std;
void print();
struct node
{
    int data;
    node *next;
};
node *root=NULL;

void delete_first()
{
    if(root!=NULL)
    {
        root=root->next;
    }
}

void delete_last()
{
   node *curr_node=root;
    while(curr_node->next->next!=NULL)
    {
        curr_node=curr_node->next;
    }
}

void delete_anywhere(int pos){
    node *curr_node = root;

    if (pos == 0){
        root = curr_node -> next;
    }
    else {
        for (int i = 0; i < pos - 1; i++){
            curr_node = curr_node -> next;
        }

        curr_node -> next = curr_node -> next -> next;
    }
}


void insert_first(int value)
{
    node *temp;
    temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(root==NULL)
    {
        root =temp;
    }
    else
    {
        temp->next=root;
        root=temp;
    }
}

void insert_last(int val)
{
    node *temp;
    temp=new node();
    temp->data=val;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        node*curr_node=root;
        while(curr_node->next)
        {
            curr_node=curr_node->next;
        }
        curr_node->next=temp;
    }
}

void insert_anywhere(int val, int pos){
    node *tmp;
    tmp = new node();

    tmp -> data = val;
    tmp -> next = NULL;

    if (pos == 0){
        if (root == NULL){
            root = tmp;
        }
        else{
            tmp -> next = root;
            root = tmp;
        }
    }
    else {
        node *curr_node = root;

        for (int i = 0; i < pos - 1; i++){
            curr_node = curr_node -> next;
        }

        node *prev = curr_node;
        curr_node = curr_node -> next;
        node *then = curr_node;

        prev -> next = tmp;
        tmp -> next = then;
    }
}

void ListSize()
{
    node *current_node = root;
    int ct = 1;

    while (current_node -> next != NULL){
        current_node = current_node -> next;
        ct++;
    }
    cout<<"List Size ";
    cout << ct << endl;
}


void Search(int value)
{
    node *current_node=root;
    cout<<"Searching Function: "<<endl;
    while(current_node!=NULL)
    {
        if(current_node->data==value)
        {
            cout<<"Found "<<endl;
            return;
        }
        current_node=current_node->next;
    }
    cout<<"Not Found";
}

void Searching()
{
    node *current_node=root;
    cout<<"new Function: "<<endl;
    while(current_node!=NULL)
    {
        if(current_node->data%2!=0)
        {
            cout<<current_node->data<<endl;
        }
        current_node=current_node->next;
    }
}

void PLNprint()
{
    cout<<"Function to Print the Previous of Last Node: "<<endl;
    node *current_node=root;
    while(current_node->next->next!=NULL)
    {
        current_node=current_node->next;
    }
    cout<<current_node->data<<endl;
}

void LNprint()
{
    cout<<"Function to Print the Last Node: "<<endl;
    node *current_node=root;
    while(current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    cout<<current_node->data<<endl;
}

void print()
{
    cout<<"Function to Print the linked list: "<<endl;
    node *current_node=root;
    while(current_node!=NULL)
    {
        cout<<current_node->data<<endl;
        current_node=current_node->next;
    }
}

int main()
{
    int x,n,S;
    cout<<"Enter total number of values: ";
    cin>>n;
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert_last(x);
        /*if(x%2!=0)
        {
            insert_last(x);
        }
        else
        {
            insert_first(x);
        }*/
    }
    /*for(int i=0;i<n-2;i++)
    {
        cin>>x;
        insert_last(x);
    }*/

    //print();
    //insert_anywhere(45, 3);
    //cout<<"Enter the searching value: ";
    //cin>>S;
    //Search(S);
    Searching();
    //LNprint();
    //PLNprint();
    //delete_last();
    //delete_first();
    //ListSize();
}
