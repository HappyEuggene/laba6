#include <iostream>
int sum(int a){
    int sum = 0;
    for(int i = 0; i < a; i++){
        sum = sum + i;
    }
    return sum;
}
int main() {
    for (int i = 0; i < 10000; ++i) {
        std::cout<<"Sum = "<<sum(i)<<std::endl;
    }
    return 0;
}