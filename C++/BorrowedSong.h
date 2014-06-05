#ifndef BorrowedSong_h
#define BorrowedSong_h

#include "Song.h"
#include <ctime>
#include <string>
using namespace std;

class BorrowedSong: public Song{
      public:
             BorrowedSong(string, string, string, int, string, string, string, string, string);
             void setBorrower(string);
             void setPlaysLeft(int);
             string getBorrower();
             int getPlaysLeft();
             struct tm * getStartTime();
             string toString();
      private:
              struct tm * startTime;
              int playsLeft;
              string borrower;
};

#endif
