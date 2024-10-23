#include <vector>
#include "recruit.h"
#include <fstream>
using namespace std;

class RecruitDB {
public:
    RecruitDB();
    RecruitDB(const RecruitDB & recruit);
    ~RecruitDB();
    // constructors

    void read_file(ifstream &inputFile);
    // read file


 
// finding methods within recruitdb class
    void searchState(const string& state) const;
    void searchPosition(const string& position) const;
    void searchStars(const int & stars) const;
    void searchPositionAndCity(const string& position, const string& city) const;

    void print_file(ofstream &outputFile) const;

    void printRecruitFormatted(const Recruit& recruit) const;

private:
    vector<Recruit> recruits;
};

