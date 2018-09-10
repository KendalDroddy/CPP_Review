/********************************************************************* 
** Author: Kendal Droddy
** Date: 9/10/18
*********************************************************************/ 
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

/*********************************************************************
**               Box Class Declaration
*********************************************************************/
class BankAccount
{
  private:
    std::string customerName;
    std::string customerID;
    double customerBalance;

  public:
    BankAccount(std::string, std::string, double);
    std::string getCustomerName();
    std::string getCustomerID();
    double getCustomerBalance();
    void withdraw(double);
    void deposit(double);
};
#endif