#include <iostream>
#include <vector>
#include <string>

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
        for (int i = 0; i < contacts.size(); i++) {
            contacts[i].getInfo(); 
        }
    }

    void editContact(string first_name, string last_name) {
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].first_name == first_name && contacts[i].last_name == last_name) {
                string newAddress, newCity, newEmail;
                int newZip;
                long newPhone;

                cout << "Enter new Address: ";
                cin.ignore();
                getline(cin, newAddress);
                cout << "Enter new City: ";
                cin >> newCity;
                cout << "Enter new Zip Number: ";
                cin >> newZip;
                cout << "Enter new Phone Number: ";
                cin >> newPhone;
                cout << "Enter new Email: ";
                cin >> newEmail;

                
                Contacts updatedContact(first_name, last_name, newAddress, newCity, newZip, newPhone, newEmail);
                contacts[i] = updatedContact;

                return;
            }
        }
        cout << "Contact not found!" << endl;
    }

    void deleteContact(string first_name, string last_name) {
        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].first_name == first_name && contacts[i].last_name == last_name) {
                contacts.erase(contacts.begin() + i);  // Removes the contact at index i
                cout << "Contact deleted successfully!" << endl;
                return;
            }
        }
        cout << "Contact not found!" << endl;
    }
};

int main() {
    cout << "Welcome to Address Book" << endl;

    AddressBook a1; 
    char addMultiplePerson = 'y'; 

    while (addMultiplePerson == 'y' || addMultiplePerson == 'Y') {
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

    cout << "for adding multiple person : y/Y";
    cin >> addMultiplePerson;  
 }

    a1.displayContacts();

    string first_name, last_name;
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;

    a1.editContact(first_name, last_name);

    cout << "Update contacts after editing" << endl;
    a1.displayContacts();

    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    a1.deleteContact(first_name, last_name);

    cout << "Update contacts after deleting" << endl;
    a1.displayContacts();


    return 0;
}
