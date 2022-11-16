/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        while(1){
        int mid=(high-low)/2+low;
        int x=guess(mid);
            if(x==0){
                return mid;
            }else if(x==1){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
};