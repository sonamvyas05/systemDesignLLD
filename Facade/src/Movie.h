#ifndef MOVIE_H
#define MOVIE_H
#include<iostream>
using namespace std;

class Movie {
    public:
    Movie(const std::string& title,const std:: string& genre,int duration );
    std:: string getTitle() const;
    std::string getGenre() const;
    int getDuration() const;
    private:
    std::string title;
    std::string genre;
    int duration;
};






#endif