#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));

    int h = 0, t = 0;

    string name;
    cout << "Who are you?" << endl;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
    cout << "Tossing a coin..." << endl;

    for(int i = 0; i < 3; i++){
        bool isheads  = rand() % 2 == 0;

        cout << "Round " << i << ": ";
        if(isheads){
            cout << "Heads" << endl;
            h++;
        }
        else{
            cout << "Tails" << endl;
            t++;
        }
    }

    cout << "Heads: " << h << ", Tails: " << t << endl;
}