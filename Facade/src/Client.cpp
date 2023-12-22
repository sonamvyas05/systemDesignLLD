#include "BookingFacade.h"
#include<iostream>
#include <string>
int main(){
    std::string movieTitle = "SpiderMan";
    std::string genre = "Animation";
    std::string username = "SonamVyas";
    std::string email = "vyassonam05@gmail.com";
    int ticketNum = 2;
   // std::string movieTitle = "SpiderMan";
    BookingFacade bookingFacade(movieTitle,genre,username,email,ticketNum);
    bookingFacade.bookTicket();


}