#include <iostream>
#include <cstring>
using namespace std;

// This is an abstract base class because it has a do nothing function
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do-nothing function --> pure virtual function
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars " << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text with title " << title << endl;
        cout << "Ratings of this text tutorial is: " << rating << " out of 5 stars " << endl;
        cout << "No. of words in this text tutorial is: " << words << " minutes" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    title = "Django tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions:

1. They canno be static
2. They are accessed by object pointers
3. virtual functions can be a friend of another class
4. A virtual function in base class might not be used.
5. A virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/