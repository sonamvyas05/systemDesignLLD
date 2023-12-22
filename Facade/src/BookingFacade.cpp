#include "BookingFacade.h"


BookingFacade::BookingFacade(const std::string& movieTitle,const std::string& genre,const std::string& username, const std::string& email, int ticketNum): movie(movieTitle,genre,120), user(username,email),booking(movie,user,2){}
void BookingFacade::bookTicket() {
    booking.confirmBooking();
}