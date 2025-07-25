#include <iostream>
#include <algorithm>

long long gcf( long long a, long long b){
    long long big = std::max(a,b);
    long long little = std::min(a,b);
    if(big%little == 0){
        return little; 
    } else {
        return gcf(little, big%little);
    }
}

long long lcm( long long a,long long b){
    std::cout<< a*b << std::endl; //Was used to debug and track whether number was fitting within type 
    return a*b/gcf(a,b);
}

int main(){
    long long beg = 11;
    for(long sec = 12; sec < 21; sec++){
        beg = lcm(beg,sec);
    }
    std::cout << "The smallest multiple is " << beg;
    return 0; 
}
