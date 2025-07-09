#include <iostream>
#include <cmath>

int largestPrime(long long n ){
    int i = 2; 
    while( n > 1){
        if(n % i == 0){
            n /= i;
        } else if(i > sqrt(n)){
            i = n;
        } else {
            i++;
        }
    }
    return i;
}
int main(){
    std::cout<< largestPrime(600851475143) <<std::endl;
    return 0;
}