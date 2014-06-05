#include <cstdlib>
#include <iostream>
#include <String>

using namespace std;

class Song
{
      public:
             //Constructer
             Song(string, string, string, int, string, string, string, string);
             //Other functions
             void play();
             string toString();
             
      private:
              //Member variables
              string owner;
              string songID;
              string title;
              string artist;
              string album;
              int year;
              string composer;
              string genre;
};

