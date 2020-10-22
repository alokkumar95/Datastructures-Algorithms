// Example program
#include <bits/stdc++.h>

using namespace std;

void stringPermutations(string a,int l,int r){
    if(l==r){ cout<<a<<"\n";
    return;
    }
    else{
    for(int i=l;i<=r;i++){
        swap(a[l],a[i]);
        stringPermutations(a,l+1,r);
        swap(a[l],a[i]);
        }
    }
    
    }

int main(){
    string s ="AB";
    int n=s.size();
    stringPermutations(s,0,n-1);
    // item assigment is possible in string in cpp
    //swap(s[0],s[1]);
    //cout<<s;
}
