/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#include <iostream>
#include <string>
#include "BankAccount.hpp"

BankAccount::BankAccount(std::string name, std::string id, double balance)
{
  customerName = name;
  customerID = id;
  customerBalance = balance;
}

std::string BankAccount::getCustomerName()
{
  return customerName;
}

std::string BankAccount::getCustomerID()
{
  return customerID;
}

double BankAccount::getCustomerBalance()
{
  return customerBalance;
}

void BankAccount::withdraw(double withdrawAmount)
{
  customerBalance -= withdrawAmount;
}

void BankAccount::deposit(double depositAmount)
{
  customerBalance += depositAmount;
}

int main()
{
  BankAccount account1("Harry Potter", "K4637", 8032.78);
  account1.withdraw(244.0);
  account1.withdraw(3012.58);
  account1.deposit(37.54);
  account1.withdraw(1807.12);
  account1.deposit(500.00);
  double finalBalance = account1.getCustomerBalance();
  std::cout << finalBalance << std::endl;
}