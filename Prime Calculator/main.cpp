//
//  main.cpp
//  Prime Calculator
//
//  Created by Anyu Gu on 7/16/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    //string input;
    vector<int> primes;
    int i;
    primes.push_back(2);
    bool isPrime;
    //while (input != "stop") {
    for (i = 2; i < 1000000; i++) {
        //cout << "Stop the program?" << endl;
        //getline(cin, input);
        isPrime = true;
        for (int j = 0; j < primes.size(); j++) {
            if (i % primes.at(j) == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
        //i++;
    }
    for (int k = 0; k < primes.size(); k++) {
        cout << primes.at(k) << " ";
    }
    cout << endl << primes.size() << " primes" << endl;
    
    return 0;
}

