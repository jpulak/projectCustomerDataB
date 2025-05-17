// Chapter 15, Programming Challenge 8: PreferredCustomer Class

#include <iostream>
#include <iomanip>
#include "PreferredCustomer.h"
using namespace std;

//driver func

int main()
{
   string lastName;     // The person's last name
   string firstName;    // The person's first name
   string address;      // The person's address
   string city;         // The person's city
   string state;        // The person's state
   string zip;          // The person's ZIP code
   string phone;
   int customerNumber;     // Customer number
   string mailingListInput;  

	// Variable to hold the amount of purchases.

	double purchase;

  //get inputs

  cin >> lastName >> firstName;
  cin.ignore();
  getline(cin, address);
  cin >> city >> state >> zip >> phone >> customerNumber >> mailingListInput >> purchase;

  // convertmailinglistinput to bool

  bool mailingList = (mailingListInput == "Yes" || mailingListInput == "yes");

  //create preferredcustomer object

  PreferredCustomer cust1(lastName, firstName, address, city, state, zip, phone, customerNumber, mailingList, purchase);

  //display intial customer dataa

  cout << fixed << setprecision (2);
  cout << "Initial Customer Data\n\n---------------------\n";
  cout << "Last name: " << cust1.getLastName() << endl; 
  cout << "First name: " << cust1.getFirstName() << endl; 
  cout << "Address: " << cust1.getAddress() << endl; 
  cout << "City: " << cust1.getCity() << endl; 
  cout << "State: " << cust1.getState() << endl; 
  cout << "ZIP: " << cust1.getZip() << endl; 
  cout << "Phone: " << cust1.getPhone() << endl; 
  cout << "Customer number: " << cust1.getCustomerNumber() << endl;
  cout << "Mailing list: " << (cust1.getMailingList() ? "Yes" : "No") << endl; // ifelse
  cout << "Purchases amount: $" << cust1.getPurchaseAmount() << endl;
  cout << "Current discount level: " << cust1.getDiscountLev() << endl;


  // additional pruchase ask

  double additional;
  cout << "Enter an additional purchase amount:\n";
  cin >> additional;
  cust1.addPurchase(additional);

  //show updated Data

  cout << "Purchases amount: $" << cust1.getPurchaseAmount() << endl;
  cout << "Current discount level: " << cust1.getDiscountLev() << endl;

// WRITE YOUR CODE HERE

    return 0;
}

