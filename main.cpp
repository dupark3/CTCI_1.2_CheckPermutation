/* 1.2 Given two strings, write a method to decide if one is a permutation of
the other  */

#include <algorithm> // sort
#include <cstdlib> // size_t
#include <iostream>
#include <string>
#include <map>

using namespace std;

bool check_permutation(string& input1, string& input2){
    if (input1.size() != input2.size()){
        return false;
    }

    sort(input1.begin(), input1.end());
    sort(input2.begin(), input2.end());

    size_t string_size = input1.size();

    for (size_t i = 0; i != string_size; ++i){
        if (input1[i] != input2[i]){
            return false;
        }
    }

    return true;

}

int main(){
    cout << "Enter two strings to check if they are a permutation of each other: ";
    string input1, input2;
    cin >> input1 >> input2;

    if (check_permutation(input1, input2)){
        cout << "PERMUTATION\n";
    } else {
        cout << "NOT PERMUTATION\n";
    }
    
    return 0;
}