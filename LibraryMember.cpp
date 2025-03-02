#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;

public:
    // Constructor
    Person(string n) {
        name = n;
    }

    // Setter function
    void setName(string n) {
        name = n;
    }

    // Getter function
    string getName() {
        return name;
    }
};
// Derived class LibraryMember (inherits from Person)
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    // Constructor
    LibraryMember(string n, int id, int books) : Person(n) {
        memberID = id;
        booksBorrowed = books;
    }

    // Getter functions
    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class PremiumMember (inherits from LibraryMember)
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    // Constructor
    PremiumMember(string n, int id, int books, double fee) 
          : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    // Getter function
    double getMembershipFee() {
        return membershipFee;
    }
};

// Main function to demonstrate the program
int main() {
    // Creating objects
    LibraryMember lm("John Doe", 101, 5);
    PremiumMember pm("Jane Smith", 102, 10, 49.99);

    // Displaying LibraryMember details
    cout << "Library Member:\n";
    cout << "Name: " << lm.getName() << endl;
    cout << "Member ID: " << lm.getMemberID() << endl;
    cout << "Books Borrowed: " << lm.getBooksBorrowed() << endl;

    cout << "\nPremium Member:\n";
    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

   return 0;
}
