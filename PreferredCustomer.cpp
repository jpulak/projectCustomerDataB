// Implementation file for the PreferredCustomer class

#include "PreferredCustomer.h"

// constructor

PreferredCustomer::PreferredCustomer(string last, string first, string addy, string c, string s, string z, string num, int custNum, bool list, double purchases):
 CustomerData(last, first, addy, c, s, z, num, custNum, list)
 {
  
  // inputvalidator

  if(purchases < 0)
  {
    purchases = 0;
  }
  purchasesAmount = purchases;
  updateDiscountLev();
 }

 //priv function to putdate the discount level

 void PreferredCustomer::updateDiscountLev(){
  if (purchasesAmount >= 2000)
  {
    discountLevel = .10;
  }
  else if (purchasesAmount >= 1500)
  {
    discountLevel = 0.07;
  }
  else if (purchasesAmount >= 1000)
  {
    discountLevel = 0.06;
  }
  else if (purchasesAmount >= 500)
  {
    discountLevel = 0.05;
  }
  else
  {
    discountLevel = 0;
  }
 }

 // func to add amount oto purchases and update discount

 void PreferredCustomer::addPurchase(double amount){
  if (amount > 0)
  {
    purchasesAmount += amount;
    updateDiscountLev();
  }
 }

 //func to return pruchase amount
 
double PreferredCustomer::getPurchaseAmount() const{
  return purchasesAmount;
}

//func to return current discount level

double PreferredCustomer::getDiscountLev() const{
  return discountLevel;
}
