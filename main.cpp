#include <iostream>
#include "print_triangle.h"
#include "triangle.h"
using namespace std;

int main() {
    double     dBase;
    double     dHeight;
    double     dArea;
    double     dPerimeter;

    // GetTriangle() prompts user to enter the base and the height of a right-angled triangle
    GetTriangle(dBase, dHeight);

    // ComputeTriangle() computes the area and the perimeter of the right-angled triange w/ the corresponding base and height
    dArea = ComputeTriangle(dBase, dHeight, dPerimeter);

    // Print out the triange info
    PrintTriangle(dBase, dHeight, dPerimeter, dArea); 
}