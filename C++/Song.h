#ifndef Song_h
#define Song_h

#include <cstdlib>
#include <iostream>
#include <String>

using namespace std;

class Song
{
      public:
             //Constructer
             Song(string, string, string, int, string, string, string, string);
             
             //Modifiers
             void setTitle(string);
             void setArtist(string);
             void setAlbum(string);
             void setYear(int);
             void setComposer(string);
             void setGenre(string);
             void setSongID(string);
             void setOwner(string);
             
             //Accessers
             string getOwner();
             string getSongID();
             string getTitle();
             string getArtist();
             string getAlbum();
             int getYear();
             string getComposer();
             string getGenre();
             
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

#endif //Song.h
