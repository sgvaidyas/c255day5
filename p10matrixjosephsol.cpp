#include <iostream>
using namespace std;
void display(int position ,int n) {
    //display the current position of the board
    for (int i = 0; i < n*n; ++i) {
        if (i % n == 0)
            cout << endl;
        if (i == position) { cout << 1; }
        else { cout << 0; }

    }
    cout<<endl;
}// functions to move around the board
void up(int &a,int n){
    if (a-n>=0) {
        a = a - n;
    } else {cout<<"cannot make that move"<<endl;
    }
}
void down(int &a,int n){
    if (a+n<n*n) {
        a = a + n;
    } else {cout<<"cannot make that move"<<endl;
    }
}void left(int &a,int n){
    if ((a-1)%n!=(n-1)&& (a-1)>=0) {
        a--;
    } else {cout<<"cannot make that move"<<endl;
    }
}void right(int &a,int n){
    if ((a+1)%n!=0) {
        a++;
    } else {cout<<"cannot make that move"<<endl;
    }

}
void getInput(int a, int n){
    //main loop that gets input and calls the move and display functions
    char c= getchar();
    switch (c) {
        case'w':
            up(a,n);
            display(a,n);
            break;
        case's':
            down(a,n);
            display(a,n);
            break;
        case'a':
            left(a,n);
            display(a,n);
            break;
        case'd':
            right(a,n);
            display(a,n);
            break;
    }
    ;
    getInput(a,n);
}
int main()
{
    int n;
    cout<<"please provide the size of the grid"<<endl;
    cin>>n;
    int a =n*(n-1);
    display(a,n);
    getInput(a,n);
}
