#include <iostream> 

int main(){
    long long sos = 0;
    long long sum = 0;
    for(long ii = 1;ii <= 100; ii++){
        sos += (ii*ii); //keep track of sum of squares
        sum += ii;
        
    }
    long long difference =(sum*sum) - sos;

    std::cout << "Difference is " << difference;
    return 0;
}