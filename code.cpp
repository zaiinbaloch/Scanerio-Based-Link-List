//Task Management System-

#include<iostream>
#include <cstdlib>
using namespace std;

struct Node {
	string task;
	int data;
	Node* next;
};

class LinkList{
	Node* head = NULL;
public:

	void fronter(int d,string t) {
		Node* node = new Node;

		if (head == NULL) {
			node->data = d;
			node->task = t;
			node->next = NULL;
			head = node;
			
		}
		else {
			node->data = d;
			node->task = t;
			node->next = head;
			head = node;
			}
	}

	void tail(int d, string t) {
		Node* node = new Node;
		node->data = d;
		node->task = t;
		node->next = NULL;
		if (head == NULL) {
			head = node;
		}
		else {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			
			temp->next = node;
		}
		
	}

	void mid(int d , string t, int found) {
		Node* node = new Node;
		if (head == NULL) {
			cout << "List does not exist";
			return;
		}
		else {
			Node* temp = head;
			while (temp != NULL) {
				if (temp->data == found) {
					node->data = d;
					node->task = t;
					node->next = temp->next;
					temp->next = node;
					return;
				}
				temp = temp->next;
			}
			cout << "Value Entered by you does not exist" << endl;
		}
	}

	void display() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data <<"%:"<< temp->task << "->";
			temp = temp->next;
		}
		cout << "NULL"<<endl;
	}

	void del(int target) {
		Node* temp = head;
		Node* prev= NULL;

		if (head == NULL) {
			cout << "List does not exist ";
			return;
		}
		if (temp!= NULL && temp->data == target) {
			head = temp->next;
			delete temp;
			cout << "Node with value " << target << " has been deleted " << endl;
			return;
		}
		while (temp->next != NULL && temp->data != target) {
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL ) {
			cout << " Value you entered does not exist in list";
			return;
		}
		prev->next = temp->next;
		delete temp;
		cout << "Node with value " << target << " has been deleted " << endl;
	}
};

int main() {
	LinkList l;
	string t;
	int d =0 ,T=0;
	char choice, c, ch;

	do {
		system("cls");
		cout<< "Enter A to add highest priority task\n"
			<< "Enter B to add lowest priority task\n"
			<< "Enter C to add task according to your priority\n"
			<< "Enter D to display list \n"
			<< "Enter E to delete entery from list" << endl;
		cin >> ch;
		switch (ch) {
		case 'A':
			do {
				cout << "\nExisting List : ";
				l.display();
				cout << "Enter importance percent of your task :";
				cin >> d;
				cout << "Enter Task : ";
				cin >> t;
				l.fronter(d,t);

				cout << "\nUpdated List : ";
				l.display();
				cout << "\nWwant to continue adding enter y/n accortingly :";
				cin >> c;
				system("cls");
			} while (c == 'y' || c == 'Y');
			break;
		case 'B':
			do{
				cout << "\nCurrent List : ";
			l.display();
			cout << "Enter importance percent of your task :";
			cin >> d;
			cout << "Enter Task : ";
			cin >> t;
			l.tail(d,t);
			cout << "\nUpdated List : ";
			l.display();

			cout << "\nWant to continue adding enter y/n accortingly :";
			cin >> c;
			system("cls");
			} while (c == 'y' || c == 'Y');
			break;
		case 'C':
			do{
				cout << "\nCurrent List : ";
			l.display();
			cout << "Enter importance percent of your task :";
			cin >> d;
			cout << "Enter Task : ";
			cin >> t;

			cout << "Now enter task number after which you want to insert :";
			cin >> T;
			l.mid(d,t,T);
			cout << "\nUpdated List : ";
			l.display();
			cout << "\nWant to continue adding enter y/n accortingly :";
			cin >> c;
			system("cls");
		} while (c == 'y' || c == 'Y');
		break;
		case 'D':
			l.display();
			break;
		case 'E':
			do{
				cout << "\nCurrent List : ";
			l.display();
			cout << "Enter task number you want to delete :";
			cin >> T;
			l.del(T);

			cout << "\nUpdated List : ";
			l.display();
			cout << "I\nWant to continue deleting enter y/n accortingly :";
			cin >> c;
			system("cls");
			} while (c == 'y' || c == 'Y');
			break;
		default:
			cout << "Invalid selection" << endl;
			break;
		}
		cout << "Want to return to Menu? (enter y/n) :";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	system("cls");
	cout << "Exiting....";
	return 0;
}
