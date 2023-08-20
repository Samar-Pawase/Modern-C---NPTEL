#include <iostream>
using namespace std;

class Point{public:
    int x, y;
};
class Rect{public:
    Point TL, BR; //Top Left and Bottom right point
};

int main(){
    Rect r = {{3, 2}, {5, 1}};
    cout << "Top left point ("<< r.TL.x << "," << r.TL.y<<")"<<endl;
    cout << "Bottom right point (" << r.BR.x << "," << r.BR.y << ")" << endl;
    return 0;
}