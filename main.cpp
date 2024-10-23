#include "RecruitDB.h"
#include <iostream>
#include <fstream>

using namespace std;



// main file which opens up the file and asks for four different types of ways to find a recruit


int main() {
RecruitDB recruitDb;
// opens up file
     ifstream inputFile("top100.txt");
   
// reads file
    recruitDb.read_file(inputFile);
     inputFile.close();

     // local varaibles to display what each player is at least for the four methods we are looking at 

    string state, position, city, highschool;
    int stars;
    // finding state
        cout << "Enter State (example AR):";
        cin >> state;

        recruitDb.searchState(state); 
 
// position finding
        cout << "Enter Position (example PF):";
        cin >> position;
        recruitDb.searchPosition(position);

// seaching by star rank of player
        cout << "Enter number of stars (example 5): ";
        cin >> stars;
        while (stars <=0 || stars > 5)
        {
           cout << "please enter a valid value 0-5";
           cin >> stars;
        }
        recruitDb.searchStars(stars);
      // search by postiion and city they are from
        cout<< "You will be asked to to find a player based on two things there position and city they live: ";
        cout << "Enter Position (example PG):";
        cin.ignore();
        getline(cin, position);
        cout << "Enter City (Example Miami):";
        getline(cin, city);
        recruitDb.searchPositionAndCity(position, city);
            return 0;

            // end of main program

    }


