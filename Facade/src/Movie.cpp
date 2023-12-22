#include "Movie.h"

Movie::Movie(const std::string& title,const std:: string& genre,int duration) : title(title) , genre(genre),duration(duration) {}

std::string Movie:: getTitle() const {
    return title;
}

std::string Movie:: getGenre() const {
    return genre;
}

int  Movie:: getDuration() const {
    return duration;
}