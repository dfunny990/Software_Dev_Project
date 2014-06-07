#include "Song.h"
#include "BorrowedSong.h"
#include "OwnedSong.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
void testSong();
void testBorrowedSong();
void testOwnedSong();

int main(int argc, char *argv[])
{
    testOwnedSong();
    system("PAUSE");
    return EXIT_SUCCESS;
}


void testSong(){
    string title="Don't Stop Believin";
    string artist="Journey";
    string album="Escape";
    int year=1981;
    string composer="Jonathan Cain";
    string genre="Rock";
    string owner="Psap";
    string songid="Psap01";
    Song a(title, artist, album, year, composer, genre, owner, songid);
    a.play();
    cout<<"Song is: "<<a.toString()<<endl;
    a.setTitle("More Than A Feeling");
    a.setArtist("Boston");
    a.setAlbum("Smokin");      //I know the album is really Boston, but I want to make sure I didn't mix any of them up.
    a.setYear(1976);
    a.setComposer("Tom Scholz");
    a.setGenre("Soft Rock");
    a.setOwner("Jenny");
    a.setSongID("Jenny01");
    cout<<"Song is: "<<a.toString()<<endl;
}

void testOwnedSong(){
    string title="Don't Stop Believin";
    string artist="Journey";
    string album="Escape";
    int year=1981;
    string composer="Jonathan Cain";
    string genre="Rock";
    string owner="Psap";
    string songid="Psap01";
    OwnedSong a(title, artist, album, year, composer, genre, owner, songid);
    a.addBorrower("Jenny");
    a.addBorrower("Liz");
    a.addBorrower("Dan");
    a.addBorrower("RJ");
    cout<<"Song is: "<<a.toString()<<endl;
    a.setStrict(true);
    cout<<"Next Borrower: "<<a.nextBorrower()<<endl;
    a.remNextBorrower();
    cout<<"Next Borrower: "<<a.nextBorrower()<<endl;
    if(a.hasQueue()){cout<<"queue is there"<<endl;}
    cout<<a.toString()<<endl;
    a.clrQueue();
    cout<<a.toString()<<endl;
    
}

void testBorrowedSong(){
    string title="Don't Stop Believin";
    string artist="Journey";
    string album="Escape";
    int year=1981;
    string composer="Jonathan Cain";
    string genre="Rock";
    string owner="Psap";
    string songid="Psap01";
    string borrower="Jenny";
    BorrowedSong a(title, artist, album, year, composer, genre, owner, songid, borrower);
    a.play();
    cout<<"Borrowed Song is: "<<a.toString()<<endl;
    a.setTitle("More Than A Feeling");
    a.setArtist("Boston");
    a.setAlbum("Smokin");      //I know the album is really Boston, but I want to make sure I didn't mix any of them up.
    a.setYear(1976);
    a.setComposer("Tom Scholz");
    a.setGenre("Soft Rock");
    a.setOwner("Jenny");
    a.setSongID("Jenny01");
    a.setBorrower("Psap");
    a.setPlaysLeft(2);
    cout<<"Borrowed Song is: "<<a.toString()<<endl;
    struct tm * songTime = a.getStartTime();
    cout<<(songTime->tm_hour)<<":"<<(songTime->tm_min)<<endl;
}
