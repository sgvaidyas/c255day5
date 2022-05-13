#include <iostream>
using namespace std;
void swap(string &s){
    string s1="";
    string s2="";
    int count=1;
    string answer;
    for (size_t i = 0; i < s.size(); ++i) {
        if(s[i]==' ') {
            count=count*-1;
            s2 = s1;
            s1 = "";
        }else
        s1 = s1 + s[i];
        if (count ==-1) {
            answer = s1 + " " + s2;
            s.replace(i-answer.size()+1,answer.size(),answer);


        }
    }
    



}
int main(){
    string e;
    getline(cin,e);
    swap(e);
    cout<<e<<endl;
}

