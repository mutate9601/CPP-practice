#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int choice;

    node *head, *temp; //this node pointer will store address of node data type
    head = NULL;       // initially head has nothing, coz nothing is created yet
    while (choice)
    {
        node *newNode = new node; // here we created a new node and allocated a space to it using new keyword
        cout << "Enter data";
        //cin >> node.data;
        cin>>newNode->data;  //here we're grabbing data from user, of strct node data, using pointer
        newNode->next = NULL; //as there is nothing in the address part of the newly created node, so we put null there
        if (head == 0)
        {
            //  head=newNode;
            head = temp = newNode;
        }
        else
        //  head->next=newNode; // here we're storing the address of secndly created node in the next of the previous node, where head is pointing right now, ie. the first node, means first node k next mei new node ka addrs dal diya
        // but here is a problem, we're changing the head value,everytime, due to which we can lose data/address of previous node, which we cant afford, so to tackel this, we create a new pointer, *temp...of node type..
        //so the above else part is not correct we'll write
        {
            temp->next = newNode; //here we're storing the address of nxt newly created node in the next of previous node where temp is pointing, which mean the next of previous node will now point at the new node created
            temp = newNode;       //and here, we are storing the address of newly created node in the temp, which means , temp will now point at this address

            //and also the if part and change it.. so we cannot move head but can move temp
            cout << "do you want to continue press 0 or 1";
            cin >> choice;
        }
        temp = head;
        while (temp != 0)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}