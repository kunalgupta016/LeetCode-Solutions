class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0];
        double b = sides[1];
        double c = sides[2];
        const double pie = 3.14159265358979323846;
        vector<double> ans;

        if( (a<b+c) && (b<a+c) && (c<a+b) && a!=0 && b!=0 && c!=0 ){

            
    double A = (acos((b*b + c*c - a*a) / (2*b*c)) * 180.0) /pie ;

    
    double B = (acos((a*a + c*c - b*b) / (2*a*c)) * 180.0) / pie;

    
    double C = (acos((a*a + b*b - c*c) / (2*a*b)) * 180.0) / pie;

            ans.push_back(A);
            ans.push_back(B);
            ans.push_back(C);

            sort(ans.begin(),ans.end());
            return ans;





        }else{
            return {};
        }
        
    }
};