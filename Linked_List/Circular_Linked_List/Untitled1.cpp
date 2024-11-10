#include <iostream>
using namespace std;
int func(void *Ptr);
int main(){
    char *Str = "abcdefghij";
    func(Str);
    return 0;
}
int func(void *Ptr){
    cout << Ptr;
    return 0;
}
