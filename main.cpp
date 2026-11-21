#include <iostream>

using namespace std;

class Stack{
    public:
        int size = 1;
        int *lis = new int[size];
        int top = -1;

        void push(int a){
            if (top + 1 == size){
                int newSize = size+1;
                int *tBuf = new int[newSize];
                for (int i = 0; i < size; ++i){
                    tBuf[i] = lis[i];
                }        
                delete[] lis;
                lis = tBuf;
                size = newSize;
            }
            top++;
            lis[top] = a;
        }
        void out(){
            if (size != top){
                int newSize = size-1;
                int *tBuf = new int[newSize];
                for (int i = 0; i < size-1 ; ++i){
                    tBuf[i] = lis[i];
                }
                delete[] lis;
                lis = tBuf;
                size = newSize;
            }
            top--;
        }

};

int main(){
    Stack neu;
    neu.push(10);
    neu.push(15);
    neu.push(20);
    for(int i = 0; i < neu.size; i++){
        cout << neu.lis[i] << endl;
    }   
    neu.out();
    neu.out();

    for(int i = 0; i < neu.size; i++){
        cout << neu.lis[i] << endl;
    }   
    return 0;
}
