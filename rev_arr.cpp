#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, a;
    cin>>N;
    vector<int> v;
    for(int i=0; i<N; i++){
        cin>>a;
        v.insert(v.begin()+i,a);
    }
    for(int i=N-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
}
