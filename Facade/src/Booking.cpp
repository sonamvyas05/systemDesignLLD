#include"Booking.h"
#include "Movie.h"
#include "User.h"
Booking::Booking(const Movie& movie,const User& user,int ticketNum) : movie(movie),user(user),ticketNum(ticketNum){}

void Booking::confirmBooking()
{
 cout<<"Booking is confirmed for this Movie "<<movie.getTitle() << "for Usernmame" << user.getUsername() <<endl;
}