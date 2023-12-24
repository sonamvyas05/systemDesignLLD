#include "BankAccountProxy.h"

BankAccountProxy :: BankAccountProxy(double initialBalance) : realAccount(new RealBankAccount(initialBalance)) {}

void BankAccountProxy:: withdraw(double amount)
{
    std::cout<<"checking balance...."<<std::endl;
    realAccount->withdraw(amount);
}

double BankAccountProxy::getBalance() const {
    return realAccount->getBalance();
}