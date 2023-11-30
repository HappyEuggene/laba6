#include <iostream>
int sum(int a){
    int sum = 0;
    int sum_nonopt = sum;
    for(int i = 0; i < a; i++){
        sum = sum_nonopt + i;
        sum_nonopt = sum;
        sum = sum_nonopt;
    }
    return sum;
}
int main() {
    for (int i = 0; i < 10000; ++i) {
        std::cout<<"Sum = "<<sum(i)<<std::endl;
    }
    return 0;
}