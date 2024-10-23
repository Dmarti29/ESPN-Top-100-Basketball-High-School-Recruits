#include "recruit.h"
#include <fstream>

// Constructor

Recruit::Recruit() {
}
    
    


// clears
void Recruit::read_txt(ifstream &inputFile) {
   
    // Read the recruit's information in order
    getline(inputFile, FirstName);
    getline(inputFile, LastName);
    getline(inputFile, Position);
    getline(inputFile, City);
    getline(inputFile, State);
    getline(inputFile, Highschool);
    getline(inputFile, Height);
    inputFile >> Weight;
    inputFile.ignore(); 
    string starStr;
    getline(inputFile, starStr); // Read stars (*****) 
    Stars = starStr.length(); // finds the length of the star so it can output the correct value
    inputFile >> Grade;
    inputFile.ignore();  // Ignore newline after grade
    getline(inputFile, School);  // Read committed school value

}


// getters
string Recruit::getFirstName() const { return FirstName; }

string Recruit::getLastName() const { return LastName; }

string Recruit::getPosition() const { return Position; }

string Recruit::getCity() const { return City; }

string Recruit::getState() const { return State; }

string Recruit::getHighschool() const { return Highschool; }

string Recruit::getHeight() const { return Height; }

int Recruit::getWeight() const { return Weight; }

int Recruit::getStars() const { return Stars; }

int Recruit::getGrade() const { return Grade; }

string Recruit::getSchool() const { return School; }

//setters

void Recruit::setFirstName(const string& firstname) 

{ 
    FirstName = firstname; 

    }
void Recruit::setLastName(const string& lastname) 
{ 
    LastName = lastname; 

    }
void Recruit::setPosition(const string& position) 
{ 
    Position = position;

     }
void Recruit::setCity(const string& city) 
{ 
    City = city; 

    }
void Recruit::setState(const string& state) 
{ 
    State = state;

     }
void Recruit::setHighschool(const string& highschool) 
{ 
    Highschool = highschool;

     }
void Recruit::setHeight(const string& height) 
{ 
    Height = height; 

    }
void Recruit::setWeight(int weight) 
{ 
    Weight = weight; 

    }
void Recruit::setStars(int stars) 
{ 
    Stars = stars; 
    
    }
void Recruit::setGrade(int grade) 
{ 
    Grade = grade;
    
     }
void Recruit::setSchool(const string& school) { School = school; }

    
void Recruit::print_file(ofstream& output) const {
    cout << FirstName << endl;
    cout << LastName << endl;
    cout << Position << endl;
    cout << City << endl;
    cout << State << endl;
    cout << Highschool << endl;
    cout << Height << endl;
    cout << Weight << endl;
    for (int i = 0; i < Stars; i++) {
        output << "*";
    }
    cout << endl;
    cout << Grade << endl;
    cout << School << endl;
}
