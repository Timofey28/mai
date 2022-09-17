#include <bits/stdc++.h>
using namespace std;

struct String
{
    char *buf;
    String(char *buf) {strcpy(this->buf, buf);}
    String(String *p) {strcpy(this->buf, p->buf);}
    String() {buf = "\0";}
    void show() {cout << "->" << buf << "<-\n";}
};

int main()
{
    setlocale(0, "");

    String s1;
    s1.show();

    String s2("hello world");
    s2.show();

    String s3(s2);
    s3.show();

    return 0;
}
