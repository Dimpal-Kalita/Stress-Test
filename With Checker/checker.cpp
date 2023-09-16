#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int n;
vector<pair<int,int>>vp(1000); 
vector<int>a(1000);
int readAns(ifstream &fin){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        fin>>a[i];
    }
    return 1;                           // Correct answer
}
int main(int argc, char * argv[]){
    ifstream fin("input_file", ifstream::in);
    ifstream ans("myAnswer", ifstream::in);
    ifstream cor("correctAnswer", ifstream::in);
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>vp[i].first;
    }
    for(int i=0;i<n;i++){
        fin>>vp[i].second;
    }
    int myAnswer = readAns(ans);
    int correctAnswer = readAns(cor);
    if(myAnswer==-2){
        cout<<"WA Sums are equal"<<endl;
        return -1;
    }
    if(myAnswer==0){
        cout<<"WA Printing another array"<<endl;
        return -1;
    }
    if(myAnswer == -1 && correctAnswer == 1){
        cout<<"Brute force found a solution, but the code didn't find"<<endl;
        return -1;
    }
    return 0;
}