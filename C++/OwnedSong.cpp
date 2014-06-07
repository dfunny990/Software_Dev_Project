#include "OwnedSong.h"
#include <string>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;

OwnedSong::OwnedSong (string _title, string _artist, string _album, int _year, string _composer, string _genre, string _owner, string _songID)
: Song(_title, _artist, _album, _year, _composer, _genre, _owner, _songID){
               isLent = false;
               howStrict = atWill;
}

void OwnedSong::setStrict(bool isStrict){
     if(isStrict){howStrict = approval;}
     else{howStrict = atWill;}
}

void OwnedSong::addBorrower(string _newOwner){
     borrowQ.push(_newOwner);
}

bool OwnedSong::isStrict(){
     if(howStrict == atWill){return false;}
     return true;
}

bool OwnedSong::hasQueue(){
     return !borrowQ.empty();
}

string OwnedSong::nextBorrower(){
       return borrowQ.front();
}

void OwnedSong::remNextBorrower(){
     return borrowQ.pop();
}

void OwnedSong::clrQueue(){
     while(!borrowQ.empty()){
                             borrowQ.pop();
     }
     return;
}

string OwnedSong::toString(){
       string temp = Song::toString();
       stringstream ss1;
       string tempStrict;
       if(howStrict == atWill){
                    tempStrict = "At Will";
       }
       else{tempStrict = "Needs Approval";}
       int tempSize = borrowQ.size();
       ss1<<tempSize;
       return (temp + ", restriction level: " + tempStrict + ", Queue Size: " + ss1.str());
}

