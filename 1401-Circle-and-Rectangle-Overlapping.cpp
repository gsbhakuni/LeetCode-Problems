class Solution {
public:
    bool checkOverlap(int r, int xcenter, int ycenter, int x1, int y1, int x2, int y2) {
        int x = max(x1, min(xcenter, x2));
        int y = max(y1, min(ycenter, y2));
        int dx = xcenter - x;
        int dy = ycenter - y;
        return dx * dx + dy * dy <= r * r;
    }
};