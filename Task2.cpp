#include <iostream>
#include "Node.cpp"
	
using namespace std;

class LinkedList{
	Node *head;
public:
	LinkedList(){	head = NULL;	}
	LinkedList& addNodeAtStart(int d){
		head = new Node(d, head);//In Node constructor either next will point to NULL or some node previously pointed by head
		return *this;
	}
	LinkedList& addNodeAtEnd(int d){
		if (!head)
			head =new Node(d);
		else{
			Node *t;
			for (t = head ; t -> next != NULL ; t = t -> next);
			t -> next = new Node (d);
		}
		return *this;
	}
	LinkedList& deleteNodeFromStart(){
		if (head!=NULL){
			Node *t = head;
			head = head -> next;
			delete t;
		}
		return *this;
	}
	LinkedList& deleteNodeFromEnd(){
		if (!head)	return *this;	//there is no node to delete
		if (head -> next == NULL){
			delete head;
			head = NULL;
		}
		else{
			Node *t = head;
			for ( ; t -> next -> next != NULL; t = t -> next );//Move to second last node
				delete t->next;
				t->next = NULL;
		}
		return *this;
	}
	void show(){
		for ( Node *t = head ; t != NULL ; t = t -> next )
			cout << t -> data << ' ';
		cout << '\n' ;
	}
    // LinkedList& OddConverter(int val){
    //     int quo,rem;
    //     quo=val/3;
    //     rem=val%3;
    //     Node* n1=new Node(quo);
    //     return n1;
    // }
    LinkedList& splitEvenElements(){
        Node*temp=head;
        
        while(temp!=nullptr)
        {
            if ((temp->data)%2==0){
                temp->data = (temp->data)-1;
                int v1=1;
                Node* nelement = new Node(v1);
                nelement->next=temp->next;
                temp->next=nelement;
                
            }
            temp=temp->next;
        }
        return*this;
    }
    LinkedList& mergeElements(){
		if (this->size()>0){
			Node* t;
		}
		for ( Node *t = head ; t != NULL ; t = t -> next ){
			if (t->data >=50)continue;
			else if (t->data <= 50){
				while ((t->data <= 50) && (t->next!= NULL)){
					t->data += t->next->data;
					t->next = t->next->next;
				}
			}	
		}
		return*this;
	}

};
int main(){
    LinkedList intList;
	intList.addNodeAtEnd(10);
	intList.addNodeAtEnd(20);
    intList.splitEvenElements().show();
    // intList.show();
}

