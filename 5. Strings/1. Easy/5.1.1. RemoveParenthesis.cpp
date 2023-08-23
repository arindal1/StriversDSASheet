#include <iostream>
#include <vector>

using namespace std;

void removeOuterParentheses(string s) {
    string ans="";
        int c=0;
        for(char ch:s){
            if(ch=='(' && c==0){
                c++;
            }
            else if(ch=='(' && c>=1){
                ans+=ch;
                c++;
            }
            else if(ch==')' && c>1){
                ans+=ch;
                c--;
            }
            else if(ch==')' && c==1){
                c--;
            }
        }
    cout << ans << endl;
}

int main() {
    string s;
    cout << "Enter a string to remove outer parenthesis: ";
    cin >> s;

    removeOuterParentheses(s);
    return 0;
}
