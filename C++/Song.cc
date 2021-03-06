#include "Song.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
//Constructor
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
//Modifiers
void Song::setAlbum(string _album){album = _album;}
void Song::setArtist(string _artist){artist = _artist;}
void Song::setComposer(string _composer){composer = _composer;}
void Song::setGenre(string _genre){genre = _genre;}
void Song::setOwner(string _owner){owner = _owner;}
void Song::setSongID(string _songID){songID = _songID;}
void Song::setTitle(string _title){title = _title;}
void Song::setYear(int _year){year = _year;}
//Accessors
string Song::getAlbum(){return album;}
string Song::getArtist(){return artist;}
string Song::getComposer(){return composer;}
string Song::getGenre(){return genre;}
string Song::getOwner(){return owner;}
string Song::getSongID(){return songID;}
string Song::getTitle(){return title;}
int Song::getYear(){return year;}

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
