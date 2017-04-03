#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

int i,n,ans = 0,w;
vector<int> weight;

ifstream inFile("file.in");
inFile >> n;

for(i = 0;i < n;++i){inFile >> w;weight.push_back(w);}
sort(weight.begin(),weight.end());

for(i = n - 1;i >= n - 5;--i)ans += weight.at(i);
cout << ans << endl;

}

