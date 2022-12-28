#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    string creditCard;
    int sum = 0;
    int d = 0;

    cout << "Enter credit card number" << endl;
    cin >> creditCard;
    //convert string to array
    bool isSecond = false;
   
    for(int i = creditCard.length() - 1 ; i >= 0 ; i--) {
        d = creditCard[i] - '0';
        
        if(isSecond == true)
        d=d*2;
        
        sum += d / 10;
        sum += d % 10;
        
        isSecond = !isSecond;
        }

    cout << "Sum: " << sum << endl;
    if (sum%10 == 0)
		printf("This is a valid card");
	else
		printf("This is not a valid card");

return 0;
    }
