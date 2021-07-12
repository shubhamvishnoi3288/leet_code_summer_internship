/** Simply iterate from the back and multiply the digits **/
class Solution {
    public String multiply(String num1, String num2) {
        
        if(num1.equals("0") || num2.equals("0"))
            return "0";
        
        int numLength1 =  num1.length();
        int numLength2 =  num2.length();
        int[] prod = new int[numLength1 + numLength2];
        
        int currIndex = prod.length;
        
        for(int index1 = numLength1-1; index1 >=0 ; index1--) {
            int prodIndex = --currIndex;
            
            for(int index2 = numLength2 - 1; index2 >=0; index2 --) {
                
                int a = num1.charAt(index1) - '0';
                int b = num2.charAt(index2) - '0';
                
                int product = a * b + prod[prodIndex];
                prod[prodIndex] = product%10;
                prodIndex --;
                prod[prodIndex] = prod[prodIndex] + product/10;
                
            }
        }
        
        int index = 0;
		//Skip the leading 0 in the prod array
        while(prod[index] == 0 ) {
            index ++;
        }
        
		StringBuilder result = new StringBuilder();
        while(index < prod.length) {
            result.append(prod[index]);
            index ++;
        }
		
        return result.toString();
        
    }
}