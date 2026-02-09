#include<iostream>
using namespace std;


class Node{
public:

	int data;
	Node *next;

	Node(int data){

		this -> data= data;
		next = NULL;
	}
};

class LinkedList{

	Node *head;

public:
	LinkedList(){
		head = NULL;
	}

// ********* INSERT OPERATION ***************

	void insertAtStart(int data){

		// create the node
		Node *node = new Node(data);

		// chck if list is empty
		if (head == NULL){
			head = node;
		
		}else{
			node -> next = head;
			head = node;
		}
	}

	void insertAtEnd(int data){

		// create the node
		Node *node = new Node(data);

		if (head == NULL){

			node = head;
		}else{
			Node *temp = head;

			while(temp -> next != NULL){
				temp = temp -> next;
			}

			temp -> next = node;
		}
	}




	void traverse(){

		if (head == NULL){
			cout << "EMPTY LIST\n";
			return;
		}

		Node *temp = head;

		while(temp != NULL){

			cout << temp -> data << " ";

			temp = temp -> next;
		}
	}














};




int main(){


	LinkedList list;
 	

 	bool flag = false;
 	while(1){

 		cout << "\n1. Insert at start\n";
 		cout << "2. Insert at End\n";
 		cout << "3. Insert at Position\n";
 		cout << "4. Traverse\n";
 		cout << "5. Exit\n";

 		int ch;
 		cout << "\nEnter the choice\n";
 		cin >> ch;

 		switch(ch){

 			case 1:{
 				int data;
 				cout << "Enter the data to insert\n";
 				cin >> data;
 				list.insertAtStart(data);
 				break;
 			};

 			case 2:{
 				int data;
 				cout << "Enter the data to insert\n";
 				cin >> data;
 				// list.insertAtEnd(data);
 				break;
 			}

 			case 3:{
 				// int data;
 				// cout << "Enter the data to insert\n";
 				// cin >> data;
 				// list.insertByPosition(data);
 				// break;
 			};

 			case 4:{
 				list.traverse();
 				break;
 			};


 			case 5:{
 				flag = true;
 			}
 		}

 		if (flag == true){
 			break;
 		}

 	}











	cout << "\n";

	return 0;
}