#include <iostream>
#include <algorithm>

struct Rectangle {
    int x, y, width, height;
};

bool hasIntersection(const Rectangle& R, const Rectangle& S, Rectangle& intersection) {
    int x1 = std::max(R.x, S.x);
    int y1 = std::max(R.y, S.y);
    int x2 = std::min(R.x + R.width, S.x + S.width);
    int y2 = std::min(R.y + R.height, S.y + S.height);

    if (x1 < x2 && y1 < y2) {
        intersection = {x1, y1, x2 - x1, y2 - y1};
        return true;
    }
    return false;
}

int main() {
    Rectangle R, S, intersection;

    std::cout << "Enter the coordinates and dimensions of the first rectangle (x & y, w & h): ";
    std::cin >> R.x >> R.y >> R.width >> R.height;

    std::cout << "Enter the coordinates and dimensions of the second rectangle (x & y, w & h): ";
    std::cin >> S.x >> S.y >> S.width >> S.height;

    if (hasIntersection(R, S, intersection)) {
        std::cout << "Intersection: (" << intersection.x << ", " << intersection.y << ", "
                  << intersection.width << ", " << intersection.height << ")\n";
    } else {
        std::cout << "No intersection\n";
    }

    return 0;
}
