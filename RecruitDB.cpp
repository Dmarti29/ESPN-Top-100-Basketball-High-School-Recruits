#include "RecruitDB.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor
RecruitDB::RecruitDB() {}




// Copy Constrcutor 



RecruitDB::RecruitDB(const RecruitDB &recruit) {
}



// Destructor
RecruitDB::~RecruitDB() {
    
}

// reading into the file and 
void RecruitDB::read_file(ifstream &inputFile) {
    string line;
    
    // Continue reading until end of file
    while (getline(inputFile, line)) {
        // Create a new Recruit object for each entry
        Recruit recruit;

        //reads data
        recruit.read_txt(inputFile);
        
        // makes sure the infomration is true
        if (!recruit.getFirstName().empty()) {
            recruits.push_back(recruit);  // Store recruit in vector
        }

        getline(inputFile, line);
    }
}


//


// Write recruits to output file
void RecruitDB::print_file(ofstream &outputFile) const {
    for (size_t i = 0; i < recruits.size(); ++i) {
        outputFile << i + 1 << endl;  
        recruits[i].print_file(outputFile);  // Print each recruit's data
        outputFile << endl;  
    }
}
   // Search by state
void RecruitDB::searchState(const string& state) const {
    bool found = false;
    for (size_t i = 0; i < recruits.size(); i++) {
        if (recruits[i].getState() == state) {
            printRecruitFormatted(recruits[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "No recruits found from state: " << state << endl;
    }
}
// position
void RecruitDB::searchPosition(const string& position) const {
    bool found = false;
    for (size_t i = 0; i < recruits.size(); i++) {
        if (recruits[i].getPosition() == position) {
            printRecruitFormatted(recruits[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "No recruits found for position: " << position << endl;
    }
}
// stars
void RecruitDB::searchStars(const int & stars) const {
    bool found = false;
    for (size_t i = 0; i < recruits.size(); i++) {
        if (recruits[i].getStars() == stars ){
            printRecruitFormatted(recruits[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "No recruits found with " << stars << 
        
        
        endl;
    }
}
// city and position
void RecruitDB::searchPositionAndCity(const string& position, const string& city) const {
    bool found = false;
    for (size_t i = 0; i < recruits.size(); i++) {
        if (recruits[i].getPosition() == position && recruits[i].getCity() == city) {
            printRecruitFormatted(recruits[i]);
            found = true;
        }
    }
    if (found== false) {
        cout << "No recruits found from city: " << position << " and highschool: " << city << endl;
    }
}
void RecruitDB::printRecruitFormatted(const Recruit& recruit) const {
    cout << "FirstName:(" << recruit.getFirstName() << ")" << endl;
    cout << "LastName:(" << recruit.getLastName() << ")" << endl;
    cout << "Position:(" << recruit.getPosition() << ")" << endl;
    cout << "City:(" << recruit.getCity() << ")" << endl;
    cout << "State:(" << recruit.getState() << ")" << endl;
    cout << "HighSchool:(" << recruit.getHighschool() << ")" << endl;
    cout << "Height:(" << recruit.getHeight() << ")" << endl;
    cout << "Weight:(" << recruit.getWeight() << ")" << endl;
    cout << "Stars:(";
    //for loop so it can properly display the stars 
    for (int i = 0; i < recruit.getStars(); i++) {
        cout << "*";
    }
    cout << ")" << endl;
    cout << "Grade:(" << recruit.getGrade() << ")" << endl;
    cout << "School:(" << recruit.getSchool() << ")" << endl;
   // so there is space inbetween
    cout << endl;

}
