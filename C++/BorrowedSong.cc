#include "BorrowedSong.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

BorrowedSong::BorrowedSong (string _title, string _artist, string _album, int _year, string _composer, string _genre, string _owner, string _songID, string _borrower)
: Song(_title, _artist, _album, _year, _composer, _genre, _owner, _songID){
                           borrower = _borrower;
                           playsLeft = 3;
                           time_t t = time(0);
                           startTime = localtime( & t);
}

string BorrowedSong::toString(){
       string temp = Song::toString();
       stringstream ss1, ss2, ss3;
       ss1<<(startTime->tm_hour);
       ss2<<(startTime->tm_min);
       ss3<< playsLeft;
       return (temp + ", " + borrower + ", " + ss1.str() + ":" + ss2.str()) + " Plays Left: " + ss3.str();
}

