#ifndef OwnedSong_h
#define OwnedSong_h

#include "Song.h"
#include <string>
#include <queue>
using namespace std;

enum restriction {atWill, approval};

class OwnedSong: public Song{
      public:
             OwnedSong(string, string, string, int, string, string, string, string);
             void setStrict(bool);
             void addBorrower(string);
             bool isStrict();
             bool hasQueue();
             string nextBorrower();
             void remNextBorrower();
             void clrQueue();
             string toString();
      private:
              bool isLent;
              queue<string> borrowQ;
              restriction howStrict;
};

#endif
