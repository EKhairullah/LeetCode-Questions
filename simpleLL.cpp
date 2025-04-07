#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){data = value,next = nullptr;}

};
class linkedlist{
    private:
    Node*head;
    public:
    linkedlist(){
        head = nullptr;
    }
    void addToEnd(int value){
        Node*newNode = new Node(value);
        if(head==nullptr){
            head = newNode;
        }
        else{
            Node*temp = head;
            while(temp->next!=nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

    }
    void D_end(int value)
    {
        if(head == nullptr) return;
        if(head->data==value) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
                
        }
        Node *temp = head;
        while(temp->next&&temp->next->data != value)
        {
            temp = temp->next;

        }
        if(temp->next)
        {
            Node * nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }


    void display()
    {
        Node *temp = head;
        while(temp!=nullptr)
        {
        cout<<temp->data<<"->";
        temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }


    ~linkedlist()
    {
        Node *temp;
        while(head)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

};
int main()
{
    linkedlist list;
    list.addToEnd(4);
    list.addToEnd(5);
    list.addToEnd(6);
    list.addToEnd(7);
    list.display();
    list.D_end(4);
    list.D_end(9);
    list.display();

}