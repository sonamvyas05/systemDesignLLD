#include "User.h"

User::User(const std::string& username,const std::string& email): username(username),email(email) {}

std::string User::getUsername() const{
    return username;
}
 

std::string User::getEmail() const{
    return email;
}