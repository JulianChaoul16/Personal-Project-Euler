// First answer to the first Project Euler Project
// Use for loop to iterate through 1000
// Use modelo to check if a number fits
// Add to running sum 
#include <iostream>
    int main(){
        int runningSum = 0;
        for(int ii = 0; ii < 1000; ii++){
            if(ii % 3 == 0 || ii % 5 == 0){
                runningSum += ii;
            }
        }
        std::cout<< "The answer is: " <<  runningSum;
        return 1; 
    }