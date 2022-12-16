#include "headerFiles\Movie.h"
#include <iostream>
using namespace std;


Movie** initializeMovies() {
    
    // Die Hard
    Director* directors = new Director[1] {
        Director("John McTiernan")
    };
    //cout << directors[0].getDirectorName() << endl;

    Actor * actors = new Actor[7] {
        Actor("Bruce Willis"),
        Actor("Bonnie Bedelia"),
        Actor("Reginald VelJohnson"),
        Actor("Paul Gleason"),
        Actor("De'voreaux White"),
        Actor("William Atherton"),
        Actor("Hart Bochner")
    };
    //cout << actors[0].getActorName() << endl;
    //cout << actors[1].getActorName() << endl;

    Genre * filmGenre = new Genre [2] {
        Genre::GENRETYPE::ACTION,
        Genre::GENRETYPE::THRILLER
    };
    //cout << filmGenre[0].getGenreType() << endl;
    //cout << filmGenre[1].getGenreType() << endl;

    Movie * movie = new Movie("Die Hard", "1988", directors, 1, actors, 7, filmGenre, 2);
    Movie * movie2 = new Movie("Die Hard2", "1988", directors, 1, actors, 7, filmGenre, 2);

    Movie ** movies;
    movies = new Movie*;//(movie);
    movies[0] = movie;
    movies[1] = movie2;
    //cout << movies[0]->getName() << endl;
    //cout << movies[1]->getName() << endl;

    return movies;
}

void printMovieDetails(Movie* movie) {

    cout << movie->getName() << " (" << movie->getDate() << ")" << endl;
    cout << "DIRECTORS (" << movie->getNumOfDirectors() << ")" << endl;
    for (int i=0; i<movie->getNumOfDirectors(); i++) {
        cout << (movie->getFirstDirector()[i]).getDirectorName() << endl;
    }
    cout << "ACTORS (" << movie->getNumOfActors() << ")" << endl;
    for (int i=0; i<movie->getNumOfActors(); i++) {
        cout << movie->getFirstActor()[i].getActorName() << endl;
    }
    cout << "FILM GENRES (" << movie->getNumOfGenres() << ")" << endl;
    for (int i=0; i<movie->getNumOfGenres(); i++) {
        cout << movie->getFilmGenre()[i].getGenreType() << endl;
        cout << movie->getFilmGenre()[i].getGenreDescription(movie->getFilmGenre()[i].getGenreType()) << endl;
    }   
}

int main() {

    Movie ** movies = initializeMovies();
    printMovieDetails(movies[0]);

    return 0;
}