
import java.util.*;

class Solution2 {

    public int missingNumber(int[] nums) {
        ArrayList<Integer> actualArray = new ArrayList<>();
        ArrayList<Integer> containMissingNumber = new ArrayList<>();
        for (int val : nums) {
            actualArray.add(val);
        }
        int min = Collections.min(actualArray);
        for (int i = min; i <= nums.length; i++) {
            containMissingNumber.add(i);
        }

        for (int i = 0; i < containMissingNumber.size(); i++) {
            if (!checkIfExist(nums, containMissingNumber.get(i))) {
                return (containMissingNumber.get(i));
            }
        }
        return (-1);
    }

    private boolean checkIfExist(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return (true);
            }
        }
        return (false);
    }
}

class Solution3 {

    public int removeDuplicates(int[] nums) {
        HashSet<Integer> set = new HashSet<Integer>();
        for (int val : nums) {
            set.add(val);
        }
        List<Integer> list = new ArrayList<>(set);

        Collections.sort(list);
        for (int i = 0; i < list.size(); i++) {
            nums[i] = list.get(i);
        }
        return (list.size());
    }
}

class Solution {

    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> set = new HashSet<Integer>();
        HashSet<Integer> set2 = new HashSet<Integer>();
        for (int val1 : nums1) {
            for (int val2 : nums2) {
                set2.add(val2);
            }
            set.add(val1);
        }
        HashSet<Integer> buff = new HashSet<>();
        for (int val : set) {
            if (set2.contains(val)) {
                buff.add(val);
            }
        }
        int[] arr = buff.stream().mapToInt(Integer::intValue).toArray();
        return (arr);
    }
}

abstract class Shape {

    abstract double paremetes();

    abstract double area();
}

class Rectangle extends Shape {

    double hight;
    double width;

    public Rectangle(double hight, double width) {
        this.hight = hight;
        this.width = width;
    }

    double paremetes() {
        return (2 * (this.hight + this.width));
    }

    double area() {
        return this.hight * this.width;
    }
}

class Circle extends Shape {

    double r;

    public Circle(double r) {
        this.r = r;
    }

    double paremetes() {
        return (2 * this.r * Math.PI);
    }

    double area() {
        return (Math.PI * Math.pow(this.r, 2));
    }
}

class Solution4 {

    Map<String, Integer> mapList = new HashMap<String, Integer>();

    public void addToMap(String key, int value) {
        mapList.put(key, value);
    }

    public Integer getFromMap(String key) {
        if (key.isEmpty()) {
            return null;
        }
        return mapList.get(key);
    }

    public boolean findFromMap(String key) {
        for (Map.Entry<String, Integer> entry : mapList.entrySet()) {
            if (entry.getKey().equals(key)) {
                return true;
            }
        }
        return false;
    }
}

@FunctionalInterface
interface myFunctonalterface {


    public double method(double a, double b);
}

class main {

    public static void main(String[] args) {
        final List <Integer> original = List.of(10, 2, 22,1,2);

        final  List <Integer> newList = original.stream().filter(e -> e % 2 == 0).toList();

        // final  List <Integer> newList = new ArrayList<>();
        
        // for (var entry : original){
        //     if (entry % 2 == 0)
        //         newList.add(entry);
        // } 

        System.out.println(newList);
    }
}
// class main {

//     public static void main(String[] args) {

//         myFunctonalterface myfunctonalterface = (a, b) -> {
//             return a * b;
//         };
//         doSomething(myfunctonalterface, 10, 10);
//     }

//     private static void doSomething(myFunctonalterface myfunctonalterface, double a, double b) {
//         System.out.println(myfunctonalterface.method(a, b));
//     }
// }
