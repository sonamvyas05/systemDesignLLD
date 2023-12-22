#ifndef BOOKINGFACADE_H
#define BOOKINGFACADE_H
#include<iostream>
#include "Movie.h"
#include "User.h"
#include "Booking.h"

class BookingFacade{

    public:
       BookingFacade(const std::string& movieTitle,const std::string& genre,const std::string& username, const std::string& email, int ticketNum);
       void bookTicket();
    private:
    Movie movie;
    User user;
    Booking booking;

};








#endif