# projectCustomerDataB
CS1337- Preferred Customer Class Part B
A retail store has a preferred customer plan where customers may earn discounts on all their purchases. The amount of a customer’s discount is determined by the amount of the customer’s cumulative purchases in the store.
• When a preferred customer spends $500, he or she gets a 5% discount on all future purchases.
• When a preferred customer spends $1,000, he or she gets a 6% discount on all future purchases.
• When a preferred customer spends $1,500, he or she gets a 7% discount on all future purchases.
• When a preferred customer spends $2,000 or more, he or she gets a 10% discount on all future purchases.
You must have completed Customer Data Class project to complete this project. Design a class named PreferredCustomer , which is derived from the CustomerData class you created in Customer Data Project. The PreferredCustomer class should have the following member variables:
• purchasesAmount (a double )
• discountLevel (a double )
The purchasesAmount variable holds the total of a customer’s purchases to date. The discountLevel variable should be set to the correct discount percentage, according to the store’s preferred customer plan. Write appropriate member functions for this class and demonstrate it in a simple program.
Input Validation: Do not accept negative values for any sales figures.
Note: You also need to edit PersonData.h and CustomerData.h files from the guide. Don’t create new files they are already created, you just need to edit it.
SAMPLE OUTPUT 1
```
Initial Customer Data

---------------------

Last name: Smith

First name: Herman

Address: 487 Main Street

City: Mayberry

State: NC

ZIP: 55555

Phone: 555-5555

Customer number: 147

Mailing list: Yes

Purchases amount: $550.00

Current discount level: 0.05


Enter an additional purchase amount: 165

Purchases amount: $715.00

Current discount level: 0.05
```
SAMPLE OUTPUT 2
```
Initial Customer Data

---------------------

Last name: Smith

First name: Herman

Address: 487 Main Street

City: Mayberry

State: NC

ZIP: 55555

Phone: 555-5555

Customer number: 147

Mailing list: Yes

Purchases amount: $550.00

Current discount level: 0.05


Enter an additional purchase amount: 550

Purchases amount: $1100.00


Current discount level: 0.06
