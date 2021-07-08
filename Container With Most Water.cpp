class Solution {
    public int maxArea(int[] heights) {
        if(heights == null || heights.length == 0){
            return 0;
        }
        
        int i = 0;
        int j = heights.length-1;
        
        int area = 0;
        
        while(i < j){
            int width = j-i;
            int height = Math.min(heights[i],heights[j]);  
            area = Math.max(area,width*height);
            if(heights[i] <= heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
}