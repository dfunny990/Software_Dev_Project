#include "Song.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

Song::Song (string _title, string _artist, string _album, int _year, string _composer, string _genre, string _owner, string _songID){
           title = _title;
           artist = _artist;
           album = _album;
           year = _year;
           composer = _composer;
           genre = _genre;
           owner = _owner;
           songID = _songID;
}

void Song::play(){
     cout<<"Now playing song "<<title<<" by "<<artist<<"."<<endl;
     cout<<title<<" has finished playing."<<endl;
}

string Song::toString(){
       stringstream ss;
       ss<<year;
       string tempYear = ss.str();
       return (title + ", " + artist + ", " + album + ", " + tempYear + ", " + composer + ", " + genre + ", " + owner + ", " + songID);
}
