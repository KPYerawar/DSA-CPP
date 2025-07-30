#include <iostream>
#include <string>
using namespace std;

struct studentinfo {
string name;
int pnr;
 studentinfo* next;
};

studentinfo* head = 0;

studentinfo* createNode(string name, int pnr) {
studentinfo* newNode = new studentinfo;
 newNode->name = name;
newNode->pnr = pnr;
newNode->next = 0;
return newNode;
}

void indata(string name, int pnr) {
studentinfo* newNode = createNode(name, pnr);
if (head == 0) {
head = newNode;
 } else {
studentinfo* temp = head;
while (temp->next != 0) {
temp = temp->next;
        }
temp->next = newNode;
  }
}

void display() {
studentinfo* temp = head;
while (temp != 0) {
cout << temp->name << " " << temp->pnr << endl;
temp = temp->next;
 }
}

int main() {
indata("Krushna", 101);
indata("Ravi", 102);
indata("Meera", 103);
display();
return 0;
}
