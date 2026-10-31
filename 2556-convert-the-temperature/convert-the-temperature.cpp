class Solution {
public:
    vector<double> convertTemperature(double c) {
        double k;
        double f;
        vector<double> ans;
        k = c + 273.15;
        f = c*1.80+32.00;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};