#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    public:
    int s=0,q=0,sl=0,ql=0;
    string st,qe;
    void pushCharacter(char a)
    {
        st[s]=a;
        s++;
    }
    void enqueueCharacter(char a)
    {
        qe[q]=a;
        q++;
    }
 char popCharacter()
    {
        sl=st.length();
        char ch;
        ch=st[sl-1];
        st[sl-1]='\0';
        return ch;
    }
    char dequeueCharacter()
    {
        ql=qe.length();
        char ch;
        ch=qe[0];
        for(int i=0;i<ql-1;i++)
        {
            qe[i]=qe[i+1];
        }
        qe[ql-1]='\0';
        return ch;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}