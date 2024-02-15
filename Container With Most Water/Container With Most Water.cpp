class Solution {
public:
    int maxArea(vector<int>& height) {
   int i=0,j=height.size()-1,water=0;
     while(i<j){
         int h=min(height[i],height[j]);
         int w=j-i;
         water=max(water,h*w);
     if(height[i]>height[j])
                j--;
            else
                i++;
        }
        
        return water;
    }
};