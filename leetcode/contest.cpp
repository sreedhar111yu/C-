lass Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        // a to z total 
        // keep taking big squares 
        // check if satisfied or not
        // agar current issue de raha to uska -1 lelo 
        int n=points.size();
        for(int i=0;i<n;i++){
            points[i][0]=abs(points[i][0]);
            points[i][1]=abs(points[i][1]);
        }
        int l=0;
        int r=1e9;
        int ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            
            map<char,int> m;
            int f=1;
            for(int i=0;i<n;i++){
                if(points[i][0]<=mid and points[i][1]<=mid){
                    
                    m[s[i]]++;
                }
            }
            for(auto it:m){
                if(it.second>1){f=0;}
            }
            
            if(f){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(points[i][0]<=ans and points[i][1]<=ans){
                
            }
        }
        return cnt;
        return ans;
    
    }
};change variable names 

