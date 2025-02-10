#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
    double x, y, w, h; 
};

double overlap(Rect r1, Rect r2){
    
    Rect overlap;
    
    overlap.x = max(r1.x,r2.x);
    overlap.y = min(r1.y,r2.y);
    overlap.w = min(r1.x+r1.w,r2.x+r2.w)-overlap.x;
    overlap.h = overlap.y - max(r1.y-r1.h,r2.y-r2.h);
    
    
    double area = overlap.w*overlap.h;
    if(area > 0){
        return area;
    }
    return 0;
}