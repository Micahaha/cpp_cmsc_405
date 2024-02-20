
using namespace std;
#include <string>
#include <iostream>
#include <iomanip>

void congratulate2(string student, string language, string programmer){
    // delcare and initialize local variable by
    // calling length
    int days = programmer.length();

    // display a message to stdout
    printf("%s has done as much %s programming as %s could fit into %d days. \n", student.c_str(), language.c_str(), programmer.c_str(), days);
   // cout << student << " has done as much " << language << " programming as " << programmer << " could fit into " << days << " days.\n"; 


}

void congratulate1(string student, string language, string programmer){
    // display as message to stdout
    // printf("%s has done as much %s programming as %s. \n", student, language, programmer);
    cout << student << " has done as much " << language << " programming as " << programmer << "\n"; 

    congratulate2(student,language,programmer);
}

// this function ues the strlen function in string.h
