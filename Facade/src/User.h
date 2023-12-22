#ifndef USER_H
#define USER_H
#include<iostream>
using namespace std;

class User{
public:
  User(const std::string& username,const std::string& email);
  std::string getUsername() const;
  std:: string getEmail() const;

private:
  std::string username;
  std::string email;
};










#endif