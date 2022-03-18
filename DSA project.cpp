#include<iostream>
#include<conio.h>
#include <string>
using namespace std;
class node {
public:
	int room_number;
	string name;
	int phone_number;
	int duration;
	node* next_add;
};
class linked_list {
public:
	node* head = NULL;
	void insert() {
		int rn;
		string n;
		int pn;
		int d;

		cout << "Enter Room Number : ";
		cin >> rn;
		cout << "Enter Customer Name : ";
		cin >> n;
		cout << "Enter Phone Number : ";
		cin >> pn;
		cout << "Enter Duration of Hours Customer Will Stay In Hotel : ";
		cin >> d;
		node* new_node = new node;
		new_node->room_number = rn;
		new_node->phone_number = pn;
		new_node->name = n;
		new_node->duration = d;
		new_node->next_add = NULL;
		if (head == NULL) {
			head = new_node;
		}
		else {
			node* ptr = head;
			while (ptr->next_add != NULL) {
				ptr = ptr->next_add;
			}
			ptr->next_add = new_node;
		}
		cout << "\n\n\n Customer Details Added Sucessfully..";
	}
	void search() {
		if (head == NULL) {
			cout << "Link List Is Empty " << endl;
		}
		else {
			int rn, found = 0;
			cout << "\\Enter Room Number For Search Customer Details  : ";
			cin >> rn;
			node* ptr = head;
			while (ptr != NULL) {
				if (rn == ptr->room_number) {
					cout << "\n\n Room Number : " << ptr->room_number;
					cout << "\n\n Customer Name : " << ptr->name;
					cout << "\n\n Phone Number : " << ptr->phone_number;
					cout << "\n\n Duration : " << ptr->duration;
					found++;
				}
				ptr = ptr->next_add;
			}
			if (found == 0) {
				cout << "\n\n Entered Room Number Is Empty ";
			}
		}
	}
	void count() {
		if (head == NULL) {
			cout << "\n\n All Room are Empty ";
		}
		else
		{
			int c = 0;
			node* ptr = head;
			while (ptr != NULL) {
				c++;
				ptr = ptr->next_add;
			}
			cout << "Total Number of Rooms Booked Are : " << c;
		}
	}

	void update() {
		if (head == NULL) {
			cout << "Link List Is Empty " << endl;
		}
		else {
			int rn, found = 0;
			cout << "\n\n Enter Room Number For Update : ";
			cin >> rn;
			node* ptr = head;
			while (ptr != NULL) {
				if (rn == ptr->room_number) {
					cout << "Enter New Room Number  : ";
					cin >> ptr->room_number;
					cout << "Enter Name : ";
					cin >> ptr->name;;
					cout << "Enter Phone Number : ";
					cin >> ptr->phone_number;
					cout << "Enter Duration of Hours Customer Will Stay In Hotel : ";
					cin >> ptr->duration;
					cout << "\n\n\n Room Details Updated Sucessfuly";
					found++;
				}
				ptr = ptr->next_add;
			}
			if (found == 0) {
				cout << "\n\n Entered Room Number Is Empty ";
			}
		}
	}



	void remove() {
		if (head == NULL) {
			cout << "Link List Is Empty " << endl;
		}
		else {
			int rn, found = 0;
			cout << "\n\n Enter Room Number For Deletion : ";
			cin >> rn;
			if (rn == head->room_number) {
				node* ptr = head;
				head = head->next_add;
				cout << "\n\n Record Deleted Sucessfully....";
				found++;
				delete ptr;
			}
			else {
				node* pre = head;
				node* ptr = head->next_add;
				while (ptr != NULL) {
					if (rn = ptr->room_number) {
						pre->next_add = ptr->next_add;
						cout << "\n\n Record Deleted Sucessfully....";
						found++;
						delete ptr;
						break;
					}
					pre = ptr;
					ptr = ptr->next_add;
				}
			}
			if (found == 0) {
				cout << "\n\n Delete Roll Number Cannot Found";
			}

		}
	}
	void show() {
		if (head == NULL) {
			cout << "Link List Is Empty " << endl;
		}
		else {
			node* ptr = head;
			while (ptr != NULL) {
				cout << "\n\n Room Number : " << ptr->room_number;
				cout << "\n\n Customer Name : " << ptr->name;
				cout << "\n\n Phone Number : " << ptr->phone_number;
				cout << "\n\n Duration : " << ptr->duration;
				ptr = ptr->next_add;
			}
		}
	}

};
int main() {
	linked_list obj;
	int choice;


p:system("cls");
	cout << "\n";
	cout << "\t\t\t\t                    HOTEL MANAGEMENT SYSTEM ";
	cout << "\n";
	cout << "\n\n PRESS 1 TO Enter Customer Record";
	cout << "\n\n PRESS 2 TO Search Record";
	cout << "\n\n PRESS 3 TO See Total Rooms Booked";
	cout << "\n\n PRESS 4 TO Update Record";
	cout << "\n\n PRESS 5 TO Delete Record";
	cout << "\n\n PRESS 6 TO Show All Record";
	cout << "\n\n PRESS 7 TO Exit";
	cout << "\n\n\n Enter Your Choice ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		obj.insert();
		break;
	case 2:
		system("cls");
		obj.search();
		break;
	case 3:
		system("cls");
		obj.count();
		break;

	case 4:
		system("cls");
		obj.update();
		break;
	case 5:
		system("cls");
		obj.remove();
		break;
	case 6:
		system("cls");
		obj.show();
		break;
	case 7:
		exit(0);
	default:
		cout << "\n\n\n Invalid Choice Please Try Again";
	}
	_getch();
	goto p;

}