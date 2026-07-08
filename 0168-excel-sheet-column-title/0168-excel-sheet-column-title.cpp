class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber > 0){
            columnNumber--;
            char curr = 'A' + (columnNumber % 26);
            result += curr;
            columnNumber /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};