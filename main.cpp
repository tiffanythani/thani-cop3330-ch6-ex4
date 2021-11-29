/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 first_name last_name
 */

/*
Define a class Name_value that holds a string and a value. Rework exercise 19 in Chapter 4 to use a vector<Name_value> instead of two vectors

(exercise 19 chapter 4)

Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17. Terminate input with NoName 0. Check that each name is unique and terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.

*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Name_value {
    public:
    string name;
    int value;

    Name_value(string nameVal, int integerVal){
        name = nameVal;
        value = integerVal;
    }

};

int main() {
    vector<Name_value> pairs; 
    string input_name;
    int input_score; 

    cout<<"Please enter a name and their score";
    while(cin>>input_name>>input_score){
        if (input_name == "NoName" && input_score == 0){
            break;
        }
        for (int i =0; i<pairs.size(); i++  ){
            if (input_name==pairs[i].name ){
                cout << " REPEAT NAME DETECTED!  EXITING." << endl;
                return 0;
            }
        }

        Name_value nmObj = Name_value(input_name, input_score);
        pairs.push_back(nmObj);

    }
    // we want to make sure the list has no duplicates 
    //step1: go through each name functionName()
    //step2: for each name, go through the other names and see if any of the otehrs match the name we're on 

    cout << "\n\nThe entered names are: " << endl;
    for (int i =0; i<pairs.size(); i++  ){
        cout <<  "(" << pairs[i].name << ", " << pairs[i].value << ")" << endl;
    }


}



