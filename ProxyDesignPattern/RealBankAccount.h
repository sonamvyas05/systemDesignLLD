#ifndef REALBANKACCOUNT_H
#define REALBANKACCOUNT_H
#include "BankAccount.h"

class RealBankAccount : public BankAccount{
    private:
       double balance;

    public:
      RealBankAccount(double initialBalance);
      void withdraw(double amount);
      double getBalance() const ;
};




#endif