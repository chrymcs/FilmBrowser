#include "headerFiles\Movie.h"
#include <iostream>
using namespace std;

Movie** initializeMovies() {
    
    // Die Hard
    //Director * dir = new Director("John McTiernan");
    //Director ** directors = new Director*;
    //directors[0] = dir;
    Director ** directors = new Director*[1] {
        new Director("John McTiernan")
    };
    cout << directors[0]->getName() << endl;
    cout << "YOLO" << endl;

    //Actor * act = new Actor("Bruce Willis");
    //Actor * act1 = new Actor("Bonnie Bedelia");
    //Actor ** acts = new Actor*;
    //acts[0] = act;
    //acts[1] = act1;
    Actor ** acts = new Actor*[7] {
        new Actor("Bruce Willis"),
        new Actor("Bonnie Bedelia"),
        new Actor("Reginald VelJohnson"),
        new Actor("Paul Gleason"),
        new Actor("De'voreaux White"),
        new Actor("William Atherton"),
        new Actor("Hart Bochner")
    };
    cout << acts[0]->getName() << endl;
    cout << acts[1]->getName() << endl;
    cout << "YOLO" << endl;

    Genre::GENRETYPE * filmGenre[2] = { new Genre::GENRETYPE(Genre::GENRETYPE::ACTION), new Genre::GENRETYPE(Genre::GENRETYPE::CRIME) };

    Movie * movie = new Movie("Die Hard", "1988", directors, 1, acts, 7, *filmGenre);
    Movie * movie2 = new Movie("Die Hard2", "1988", directors, 1, acts, 7, *filmGenre);

    Movie ** movies;
    movies = new Movie*;//(movie);
    movies[0] = movie;
    movies[1] = movie2;
    cout << movies[0]->getName() << endl;
    cout << movies[1]->getName() << endl;
    cout << movie->getFirstDirector()[0]->getName() << endl;
    cout << movie->getFirstActor()[0]->getName() << endl;
    cout << movie->getFirstActor()[1]->getName() << endl;

    /*
    Movie * movies;
    movies[0] = movie(...);
    den mporw na paw sthn prwth thesi tou pinaka movies kai na valw timh enos object mesa xwris prwta
    na desmeusw mnhmh me new giauto (segmentation fault)
    */
    return movies;
}

void printMovieDetails(Movie* movie) {

    cout << movie->getName() << " (" << movie->getDate() << ")" << endl;
    cout << "DIRECTORS (" << movie->getNumOfDirectors() << ")" << endl;
    for (int i=0; i<movie->getNumOfDirectors(); i++) {
        cout << (movie->getFirstDirector()[i])->getName() << endl;
    }
    cout << "ACTORS (" << movie->getNumOfActors() << ")" << endl;
    for (int i=0; i<movie->getNumOfActors(); i++) {
        cout << movie->getFirstActor()[i]->getName() << endl;
    }
    // cout << "FILM GENRES (" << movie->getNumOfGenres() << ")" << endl;
    // for (int i=0; i<movie->getNumOfGenres(); i++) {
    //     Genre gen = *(movie->getFilmGenre() + i);
    //     cout << gen.getGenreType() << endl;
    //     cout << gen.getGenreDescription(gen.getGenreType()) << endl;
    // }   
}

int main() {

    Movie ** movies = initializeMovies();
    printMovieDetails(movies[0]);

    return 0;
}