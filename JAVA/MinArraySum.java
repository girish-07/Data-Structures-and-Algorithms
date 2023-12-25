import java.io.*;
import java.util.*;

public class Main
{
    public static Integer minArraySum(ArrayList<Integer> arr) {
        Double avg=0.0;
        for(Integer num: arr) {
            avg += num;
        }
        avg = (avg/arr.size());
        Integer sum=0;
        for(Integer num: arr) {
            if(num<avg) sum += num;
        }
        return sum;
    }
    
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int n;
	    n = sc.nextInt();
	    ArrayList arr = new ArrayList<Integer>();
	    for(int i=0; i<n; i++) {
	        int tmp;
	        tmp = sc.nextInt();
	        arr.add(tmp);
	    }
		System.out.println(minArraySum(arr));
	}
}
