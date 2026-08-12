#include <iostream>

using namespace std; 

struct Node{
    Node* next ;
    int data; 
};

int main(){
    
    Node* head = NULL , *temp , *newNode ;
    int length , value ; 


    cout << "Let's practice Linkedin List again using while loop : " << endl << endl;
    cout << "Define the length of Linkedin List : " ;
    cin >> length ; 

    for(int i =0 ; i < length ; i++){
        
        newNode = new Node; 
        cout << "Enter the " << i +1 << " Value : " ;
        cin >> value ; 

        newNode->data = value ; 
        newNode->next = NULL; 

        if(head == NULL){
            head = newNode; 
            temp = head ;
        }else{
            temp->next = newNode;
            temp = newNode; 
        }


    }


    temp = head ;

    while(temp != NULL){
        cout << temp->data << "------------";
        temp = temp->next; 
    }

    cout << "NULL" << endl ; 


    return 0 ; 
}