#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>

class BankAccount{
    public:
    virtual void withdraw(double amount) =0;
    virtual double getBalance() const =0;
    
};





#endif