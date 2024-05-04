#include <iostream>

#include "PhysicsEngine2D/PlainVector.h"
using namespace std;

int main() {
        PlainVector p1;
        PlainVector p2(1.1f ,1.2f);
        p2 = p2 + p1;
        cout << p2.getY() << endl;
}
