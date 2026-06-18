class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr = ((hour%12)*30) + (minutes*0.5);
        double mn = minutes*6;
        double deg = abs(hr-mn);
        return min(deg,360.0-deg);
    }
};