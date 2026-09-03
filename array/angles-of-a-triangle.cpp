class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double> angles; 
        if(sides.size()!=3)
            return angles;
        else{
            sort(sides.begin(), sides.end());
            double a=sides[0];
            double b=sides[1];
            double c=sides[2];
        if(a+b>c && b+c>a && a+c>b){
            double A=acos((a*a+b*b-c*c)/(2*a*b));
            double B=acos((a*a+c*c-b*b)/(2*a*c));
            double C=acos((c*c+b*b-a*a)/(2*c*b));
            A=A * (180.0 / 3.14159265358979);
            B=B * (180.0 / 3.14159265358979);
            C=C * (180.0 / 3.14159265358979);
            angles.push_back(A);
            angles.push_back(B);
            angles.push_back(C);
            sort(angles.begin(), angles.end());
        
        }
        }
    return angles;
    }
};