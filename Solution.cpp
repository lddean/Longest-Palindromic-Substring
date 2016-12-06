#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string search(string& s, int left, int right);

string longestPalindrome(string s) {
    
    string maxlen;
    
    for (int i = 0; i < s.length(); i++){
        
        int left = 0;
        int right = 0;
        
        string a = "";
        
        if (i <= s.length() - 2){
            
            if(s[i] == s[i + 1]){
                
                left = i;
                right = i + 1;
                
                a = search(s, left, right);
                
                if (a.length() > maxlen.length()){
                    
                    maxlen = a;
                }
            }
            
        }
        
        left = i;
        right = i;
        
        a = search(s,left,right);
        
        if (a.length() > maxlen.length()){
            maxlen = a;
        }
    }
    
    
    return maxlen;
    
}


string search(string& s, int left, int right){
    
    string ans("");
    
    //cout << s << "   "<< left << "    " << right << endl;
    if (left == right){
        
        ans = ans + s[left];
        
        //cout << "asdf    "  <<ans << endl;
    }else{
        //cout << "@@@@@@@@@@@@@@" <<endl;
        
        //cout << s[left] << s[right] << endl;
        ans = ans + s[left] + s[right];
        //cout << ans << endl;
    }
    
    int step = 1;
    while(left - step >= 0 && right + step <= s.length() - 1){
        
        if (s[left - step] != s[right + step]){
            //cout << ans << endl;
            return ans;
        }else{
            
            ans = s[left - step] + ans + s[right + step];
        }
        
        step ++;
    }
    
    //cout << ans << endl;
    
    return ans;
}

int main(){
    
    string a = "abb";
    
    cout <<longestPalindrome(a) << endl;
    
    a = "ababc";
    
    cout << longestPalindrome(a) << endl;
    
}
