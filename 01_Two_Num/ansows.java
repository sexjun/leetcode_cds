import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[j] == (target - nums[i])) {
                    return new int[]{i, j};
                }
            }
        }           
        return new int[]{nums[0]};
    }
}

class Solution_2 {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> hashmap = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            if(hashmap.containsKey(target - nums[i])) {
                return new int[]{hashmap.get(target - nums[i]), i};
            }
            hashmap.put(nums[i], i);
        }
        
        return new int[]{nums[0]};
    }
}

public class ansows{
    void TheEnumerationOfViolence() {
        Solution a = new Solution();
        int[] nums = new int[]{2,7,11,15};
        int target = 9;
        int[] ans = a.twoSum(nums, target);
        for (int i : ans) {
            System.out.print(i + " ");
        }
    }
    
    void TheHashMap() {
        Solution_2 a = new Solution_2();
        int[] nums = new int[]{2,7,11,15};
        int target = 9;
        int[] ans = a.twoSum(nums, target);
        for (int i : ans) {
            System.out.print(i + " ");
        }

    }

    public static void main(String[] args) {
        ansows a = new ansows();
        // a.TheEnumerationOfViolence();
        a.TheHashMap();
    }

}
