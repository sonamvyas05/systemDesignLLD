#ifndef BANKACCOUNTPROXY_H
#define BANKACCOUNTPROXY_H
#include "BankAccount.h"
#include "RealBankAccount.h"

class BankAccountProxy : public BankAccount{
    private:
      RealBankAccount* realAccount;
    public:
      BankAccountProxy(double initialBalance);
      void withdraw(double amount);
      double getBalance() const ; 
};





#endif