#include <iostream>
using namespace std;

struct Node
{
    Node *next;
    int data;
};

int main()
{

    Node *head = NULL, *temp, *newNode;

    int length, value;
    cout << "Enter the Length of Linkedin List: ";
    cin >> length;



    for (int i = 0; i < length; i++)
    {
        newNode = new Node; 
        
        cout << "Enter the " << i + 1 << " Node Date: ";
        cin >> value;
        

        newNode->data = value; 
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            temp = head ; 
        }else{
            temp->next = newNode; 
            temp = newNode; 
        }


    }

    for(temp = head ; temp != NULL ; temp = temp->next){
        cout << temp->data << "-------------";
    }
    cout << "NULL" << endl ; 
}