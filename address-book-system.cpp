#include <iostream>
#include <vector> 

using namespace std;

class Contacts {
public:
    string first_name;
    string last_name;
    string address;
    string city;
    int zip_number;
    long phone_number;
    string email;

    Contacts(string first_name, string last_name, string address, string city, int zip_number, long phone_number, string email) {
        this->first_name = first_name;
        this->last_name = last_name;
        this->address = address;
        this->city = city;
        this->zip_number = zip_number;
        this->phone_number = phone_number;
        this->email = email;
    }

    void getInfo() {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Address: " << address << endl;
        cout << "City: " << city << endl;
        cout << "Zip Number: " << zip_number << endl;
        cout << "Phone Number: " << phone_number << endl;
        cout << "Email: " << email << endl;
    }
};

class AddressBook {
    vector<Contacts> contacts;

public:
    void addContact(const Contacts& contact) {
        contacts.push_back(contact); 
    }

    void displayContacts() {
        for (size_t i = 0; i < contacts.size(); ++i) {
                contacts[i].getInfo(); 
        }
    }
};

int main() {
    cout << "Welcome to Address Book" << endl;

    AddressBook a1; 

    string first_name, last_name, address, city, email;
    int zip_number;
    long phone_number;

   
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Address: ";
    cin.ignore();
    getline(cin, address);
    cout << "Enter City: ";
    cin >> city;
    cout << "Enter Zip Number: ";
    cin >> zip_number;
    cout << "Enter Phone Number: ";
    cin >> phone_number;
    cout << "Enter Email: ";
    cin >> email;

   
    Contacts newContact(first_name, last_name, address, city, zip_number, phone_number, email);
    a1.addContact(newContact); 

    a1.displayContacts();

    return 0;
}
