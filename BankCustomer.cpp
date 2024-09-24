#include <iostream>
#include <string>

using namespace std;

class BankCustomer {
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;

    public:
        // Constructor to initialize BankCustomer
        BankCustomer(string nameArg, string adharNumberArg, string panNumberArg, string emailArg, string phoneArg) {
            this->name = nameArg;
            this->adharNumber = adharNumberArg;
            this->panNumber = panNumberArg;
            this->emailId = emailArg;
            this->phoneNumber = phoneArg;
        }

        // Friend function to overload << operator for printing customer info
        friend ostream& operator<<(ostream& os, const BankCustomer& customer) {
            os << "Name: " << customer.name << endl;
            os << "Pan: " << customer.panNumber << endl;
            os << "Adhar: " << customer.adharNumber << endl;
            os << "Email: " << customer.emailId << endl;
            os << "Phone: " << customer.phoneNumber << endl;
            return os;
        }
};

int main() {
    // Create a BankCustomer object with sample data
    BankCustomer customer1("Chikku", "42234", "1234", "a@4332.com", "1234555");

    // Print the customer info using the overloaded << operator
    cout << customer1;

    return 0;
}
