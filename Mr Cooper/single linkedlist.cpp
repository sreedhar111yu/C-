 #include<bits/stdc++.h>
 using namespace std;

 class Node{
    public:
    int data;
    Node*next;

    Node(){
        data=0;
        next=nullptr;
    }
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }

 };

 class Linkedlist{

    Node*head;

public:
    
    Linkedlist(){
        head=nullptr;
    }

void insertNode (int data){
    Node*newnode = new Node(data);
    if(head==nullptr){
        head=newnode;
        return;
    }
    Node*temp=head;
    while(temp->next !=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}
void deleteNode(int nodeof){
    Node*temp1=head;
    Node*temp2=nullptr;
    int listen=0;

    if(head==nullptr){
        cout<<"list is empty"<<endl;
    }
    while(temp1!=nullptr){
        temp1=temp1->next;
        listen++;

    }
    if(listen<nodeof){
        cout<<"Index is out of range"<<endl;
    }

    temp1 =head;

    if(nodeof==1){
        head=head->next;
        delete temp1;
        return;
    }
    while(nodeof-->1){
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=temp1->next;
    delete temp1;
}
void printList(){
    Node*temp=head;
    if(head==nullptr){
        cout<<"empty"<<endl;
        return;

    }
    while(temp!=nullptr){
        cout<<temp->data;

    }
}
 
  

 };
int main(){
    Linkedlist list;
}
 