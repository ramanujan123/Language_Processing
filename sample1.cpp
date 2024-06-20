#include<bits/stdc++.h>
using namespace std

int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;

    if (sum == 15) {
        cout<<"Sum is equal to 15";
}
    else {
        cout<<"Sum is not 15";
    }

    for (int i = 0; i < 5; i++) {
    	sum = sum+1;
    }

    return 0;
}

