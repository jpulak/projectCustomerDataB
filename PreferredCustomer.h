// Specification file for the PreferredCustomer class

#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H
#include "CustomerData.h"

//derive class from CustomerData

class PreferredCustomer : public CustomerData{
  
  //private data

  private:
  double purchasesAmount;
  double discountLevel;
  void updateDiscountLev(); //update based on purchases

  //public data

  public:

  //constructor

  PreferredCustomer(string last, string first, string addy, string c, string s, string z, string num, int custNum, bool list, double purchases);

  // public member funcs

  void addPurchase(double amount);
  double getPurchaseAmount() const;
  double getDiscountLev() const;
};
#endif
