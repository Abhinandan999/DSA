#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    // Variable to store the sum
    int sum = 0;

    // Iterate through the vector and calculate the sum
    for (int num : numbers) {
        sum += num;
    }

    // Display the sum
    cout << "The sum of the vector elements is: " << sum << endl;

    return 0;
}
