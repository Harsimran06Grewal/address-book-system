#include <iostream>

using namespace std;

class Contacts{
public:
    string first_name;
    string last_name;
    string address;
    string city;
    int zip_number;
    long phone_number;
    string email;

    Contacts(string first_name, string last_name, string address, string city, int zip_number, long phone_number, string email){
        this->first_name = first_name;
        this->last_name =  last_name;
        this->address = address;
        this->city = city;
        this->zip_number = zip_number;
        this->phone_number = phone_number;
        this->email = email;        
    }

    void getInfo(){
    cout << "first_name : " << first_name << endl;
    cout << "last_name : " << last_name << endl;
    cout << "address : " << address << endl;
    cout << "city : " << city << endl;
    cout << "zip_number : " << zip_number << endl;
    cout << "phone_number : " << phone_number << endl;
    cout << "email : " << email << endl;
    }
};

int main(){
    cout << "Welcome to Address Book" << endl;
    Contacts c1("simran", "kaur", "Sangrur, Punjab", "Patiala", 9087, 98675545, "harsimran@gmail.com");
    c1.getInfo();

    return 0;
    
}