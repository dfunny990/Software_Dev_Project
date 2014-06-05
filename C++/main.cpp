#include "Song.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
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
    system("PAUSE");
    return EXIT_SUCCESS;
}
