#ifndef BOOKING_H
#define BOOKING_H
#include<iostream>
#include "Movie.h"
#include "User.h"

class Booking{
public:
   Booking(const Movie& movie,const User& user,int ticketNum);
   void confirmBooking();

private:
   Movie movie;
   User user;
   int ticketNum;

};




#endif