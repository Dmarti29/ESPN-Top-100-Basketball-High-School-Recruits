#ifndef RECRUIT_H
#define RECRUIT_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Recruit {
public:
    Recruit();
//getters
    string getFirstName() const;
    string getLastName() const;
    string getPosition() const;
    string getCity() const;
    string getState() const;
    string getHighschool() const;
    string getHeight() const;
    int getWeight() const;
    int getStars() const;
    int getGrade() const;
    string getSchool() const;
//setters
    void setFirstName(const string& firstname);
    void setLastName(const string& lastname);
    void setPosition(const string& position);
    void setCity(const string& city);
    void setState(const string& state);
    void setHighschool(const string& highschool);
    void setHeight(const string& height);
    void setWeight(int weight);
    void setStars(int stars);
    void setGrade(int grade);
    void setSchool(const string& school);
// read file
    void read_txt(ifstream &input);
    // print file
    void print_file(ofstream &output) const;


private:  // private varaibles
    string FirstName, LastName, Position, City, State, Highschool, Height, School;
    int Weight, Stars, Grade;
};

#endif

