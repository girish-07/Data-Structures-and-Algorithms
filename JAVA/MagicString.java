import java.io.*;
import java.util.*;

public class Main
{
    public static Integer magicString(String str) {
        HashMap<Character, Integer> mp = new HashMap<Character, Integer>();
        Integer mx=0;
        for(int i=0; i<str.length(); i++) {
            if(!mp.containsKey(str.charAt(i))) {
                mp.put(str.charAt(i), 1);
            }
            else {
                mp.put(str.charAt(i), mp.get(str.charAt(i))+1);
            }
            if(mp.get(str.charAt(i))>mx) mx = mp.get(str.charAt(i));
        }
        return str.length()-mx;
    }
    
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		System.out.println(magicString(str));
	}
}
