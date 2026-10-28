#include <bits/stdc++.h>
using namespace std;

vector<string> tokenize(string& command){
    vector<string> words;

    int n = command.size();

    // iterator in the string
    int i = 0;

    while(i<n){
        if(command[i] == ' '){
            // if empty skip
            i++;
        }
        else{
            // found first char of a word stop and get this word
            string w = "";

            while(i<n && command[i]!=' '){
                w+=command[i];
                i++;
            }

            words.push_back(w);
        }
    }

    return words;

}

