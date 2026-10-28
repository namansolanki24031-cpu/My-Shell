#include <bits/stdc++.h>
#include <unistd.h>
#include <limits.h>
using namespace std;

#include "Parse.h"

int main(){
    // Get the current directory to print it 
    char cwd[PATH_MAX];
    if(getcwd(cwd,sizeof(cwd))==NULL){
        cout << "Error : Couldn't find CWD" << endl;
    }

    // take command parse and then execute
    while(true){
        // print the cwd just like normal shell
        cout << cwd << "$ ";
        
        // take command as input
        string command;
        getline(cin,command);

        // parse the command

    }

    // then execute it in parts 
    return 0;
}