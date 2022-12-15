#pragma once
#include "Director.h"
#include "Actor.h"
#include "Genre.h"
#include <string>

using namespace std;

class Movie {
    string name; //movie's title
    string date; //date of production
    Director** directors; //a movie may have 1 or more directors
    int numOfDirectors;
    Actor** actors; //a movie has many actors
    int numOfActors;
    Genre::GENRETYPE* genre; //film genre
    //Example: “Schindler's List", 1993, "Steven Spielberg", "Liam Neeson, Ralph Fiennes, Ben Kingsley", "drama, history"
public:
    Movie(string n, string d, Director** dir, int numOfDirs, Actor** act, int numOfActs, Genre::GENRETYPE* g) {
        name = n;
        date = d;
        directors = dir;
        numOfDirectors = numOfDirs;
        actors = act;
        numOfActors = numOfActs;
        genre = g;
    };
    string getName() {return name;}
    string getDate() {return date;}
    Director** getFirstDirector() {return directors;}
    int getNumOfDirectors() {return numOfDirectors;}
    Actor** getFirstActor() {return actors;}
    int getNumOfActors() {return numOfActors;}
    Genre::GENRETYPE* getFilmGenre() {return genre;}   
};

/* TODO
Die Hard (1988) |The Avengers (2012) | Wonder Woman (2019)";
The Goonies (1985) |The Lord of The Rings: The Fellowship of the Ring (2001) | Life of Pi (2012)";
Spirited Away (2001) |The Lion King (1994) | The Simpsons (1987)";
Judy (2019) |Unbroken (2014) | Erin Brockovich (2000)";
Some Like it Hot (1959) |When Harry Met Sally... (1989) | Bridesmaids (2011)";
 Pulp Fiction (1994) |The Usual Suspects (1995) | Fargo (1996)";
American Factory (2019) |March of the Penguins (2005) | Exit Through the Gift Shop (2010)";
The Shawshank Redemption (1994) |What's Eating Gilbert Grape (1993) | Casablanca (1942)";
 Toy Story (1995) |The Wizard of Oz (1939) | Mary Poppins (1964)";
 Game of Thrones (2011) |Harry Potter and The Sorcerer's Stone (2001) | Stranger Things (2016)";
Lincoln (2012) |Hidden Figures (2016) | The King's Speech (2010)";
The Shining (1980) |Halloween (1978) | A Quiet Place (2018)";
The Sound of Music (1965) |La La Land (2016) | The Greatest Showman (2017)";
The Girl on the Train (2016) |Gone Girl (2014) | Winter's Bone (2010)";
Dateline NBC (1992) |Vice (2013) | Last Week Tonight with John Oliver (2014)";
The Notebook (2004) |Bridget Jones's Diary (2001) | Shakespeare In Love (1998)";
 Star Wars (1977) |The Matrix (1999) | Alien (1979)";
Black Swan (2010) |The Silence of the Lambs (1991) | Se7en (1995)";
1917 (2019) |Saving Private Ryan (1998) | Platoon (1986)";
Unforgiven (1992) |The Good, the Bad, and the Ugly (1966) | The Revenant (2015)";

*/