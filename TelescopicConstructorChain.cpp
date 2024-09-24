// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    BankCustomer() {}
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        this->emailId="";
        this->phoneNumber="";
        
    }
       BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string emailArg,string phoneArg){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        this->emailId=emailArg;
        this->phoneNumber=phoneArg;
        
    }
 
    
    void printCustomerInfo(){
         
        cout << "Name: " << name << endl;
        cout << "Adhar Number: " << adharNumber << endl;
        cout << "PAN Number: " << panNumber << endl;
        cout << "Email ID: " << emailId << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    
    }
    
};

int main() {
       // Using constructor with name, adharNumber, and panNumber
    BankCustomer customer1("John Doe", "1234-5678-9012", "ABCDE1234F");
    cout << "Customer 1 Info:" << endl;
    customer1.printCustomerInfo();
    cout << endl;

    // Using constructor with name, adharNumber, panNumber, email, and phone
    BankCustomer customer2("Jane Doe", "5678-9012-3456", "XYZ1234AB", "jane@example.com", "9876543210");
    cout << "Customer 2 Info:" << endl;
    customer2.printCustomerInfo();

    
    return 0;
}
