#include <stdio.h>
#include <iostream>

using namespace std;

void exitHandler(void);

int main(){
    if(atexit(*exitHandler)!=0){
        cerr << "Failed to register exit handler!" << endl;
        return 1;
    }
    return 0;
}

void exitHandler(void){
    cout<<"We do this at the end"<<endl;
}


