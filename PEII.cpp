#include <iostream>
    int main(){
        long long one = 1, two = 1, meme = one + two, runningSum = 0;
        std::cout<<"We start with: " << one << " and " << two;
        while(meme < 4000000){
            if(meme % 2 == 0){
                runningSum += meme;
            }
            one = two;
            two = meme; 
            meme = one + two;
        }
        std::cout<< " TOTAL = " << runningSum;
        return 0;
    }