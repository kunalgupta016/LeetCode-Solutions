class Solution {
public:

    long long overlap(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        int w = min(ax2,bx2)-max(ax1,bx1);
        int h = min(ay2,by2)-max(ay1,by1);
        if(w<=0 || h<=0) return 0;
        
        return (long long)(w*h);

    }


    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = abs(ax1-ax2)*abs(ay1-ay2);
        int area2 = abs(bx1-bx2)*abs(by1-by2); 
        int over = overlap(ax1,ay1,ax2,ay2,bx1,by1,bx2,by2);
        return (area1+area2-over);
    }
};