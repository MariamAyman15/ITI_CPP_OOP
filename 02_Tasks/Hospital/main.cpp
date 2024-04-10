#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Patient {
    long long ID;
    string firstname;
    string lastname;
    int age;
    string blood;
    char gender;
    Patient* next;
};

class Queue {
    Patient* head;
    Patient* tail;
public:
    Queue() {
        head = NULL;
        tail = NULL;
    }

    void enqueue() {
        Patient* p = new Patient();
        cout << "Enter patient information:\n";
        cout << "First name: ";
        getline(cin, p->firstname);
        cout << "Last name: ";
        getline(cin, p->lastname);
        cout << "Blood group: ";
        getline(cin, p->blood);
        cout << "Gender (m/f): ";
        cin >> p->gender;
        cout << "Age: ";
        cin >> p->age;
        cout << "Mobile number: ";
        cin >> p->ID;

        // Check if ID already exists
        Patient* curr = head;
        while (curr != NULL) {
            if (curr->ID == p->ID) {
                cout << "Patient already exists with this ID\n";
                return;
            }
            curr = curr->next;
        }

        p->next = NULL;
        if (head == NULL) {
            head = tail = p;
        }else {
            tail->next = p;
            tail = p;
        }
        cout << "Patient added successfully\n";
    }

    void dequeue() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Patient* p = head;
        head = head->next;
        cout << "Patient removed:\n";
        cout << "ID: " << p->ID << endl;
        cout << "Name: " << p->firstname << " " << p->lastname << endl;
        cout << "Gender: " << p->gender << endl;
        cout << "Age: " << p->age << endl;
        cout << "Blood group: " << p->blood << endl;
        delete p;
    }

    void display() {
        if (head == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "List of patients:\n";
        Patient* curr = head;
        while (curr != NULL) {
            cout << "ID: " << curr->ID << endl;
            cout << "Name: " << curr->firstname << " " << curr->lastname << endl;
            cout << "Gender: " << curr->gender << endl;
            cout << "Age: " << curr->age << endl;
            cout << "Blood group: " << curr->blood << endl << endl;
            curr = curr->next;
        }
    }
};

int main() {
    Queue q;
    int choice;
    while (true) {
        cout << "\n\n";
        cout << "========================\n";
        cout << "        Hospital         \n";
        cout << "========================\n";
        cout << "1. Add patient\n";
        cout << "2. Remove patient\n";
        cout << "3. Display patient list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                q.enqueue();
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}
