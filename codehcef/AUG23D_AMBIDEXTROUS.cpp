// I Can Use Both Hands!
// Chef has a special ability: he can use both his left and right hands equally well, and at the same time!

// To put this ability into practice, Chef decides that he's going to write a novel with his left hand, while writing code with his right.

// Chef needs 
// L
// L minutes to write a page with his left hand, and 
// R
// R minutes to write a line of code with his right.
// Chef defines his satisfaction to be the number of pages he's started writing, plus the number of lines of code he's finished writing.

// What will Chef's satisfaction be after 
// M
// M minutes?

/*THIS PROGRAM IS CODED BY AKASH VISHWAKARMA ON DATE-30-06-2021*/ 
#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    int l, r, m;
    cin >>t;
    while (t--) {
        cin >> l>>r>>m;
    int satisfaction=ceil((float)m/l)+floor(m/r);
    cout<<satisfaction<<endl;
    }

    return 0;
}