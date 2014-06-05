#include "Song.h"
#include "BorrowedSong.h"
#include <cstdlib>
#include <iostream>

using namespace std;
void testSong();
void testBorrowedSong();

int main(int argc, char *argv[])
{
    cout<<"Test Borrowed Song"<<endl;
    testBorrowedSong();
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
}
