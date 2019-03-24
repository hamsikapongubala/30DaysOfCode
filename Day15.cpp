#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
        //Node n(data);
        if(head == NULL){
            head = new Node(data);
            return head;
        }
        else{
           Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = new Node(data);
        }
            return head;   
      }
