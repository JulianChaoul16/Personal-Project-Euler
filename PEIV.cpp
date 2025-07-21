#include <iostream>
#include <algorithm>
#include <string>

bool checkPal(int num){
    std::string snum = std::to_string(num);
    int ii = 0, jj = snum.length() - 1;
    while (ii < jj) {
        if (snum[ii] != snum[jj]) {
            return false;
        }
        ii++;
        jj--;
}
    return true; 
}
int main(){
    long ans = 0; 
    for(int ii = 999; ii >=100; ii--){
        for(int jj = 999; ii >= 100; jj--){
            long temp = ii*jj; 
            if(checkPal(temp)){
                ans = std::max(ans,temp);
            }
        }
    }
    std::cout<<"The answer is: " << ans; 
    return 0; 
}