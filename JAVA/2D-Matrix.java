import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) {
		int r, c, d;
		Scanner s = new Scanner(System.in);
		r = s.nextInt();
		c = s.nextInt();
		int[][] arr = new int[r][c];
		for(int i=0; i<r; i++) {
		    for(int j=0; j<c; j++) {
		        arr[i][j] = s.nextInt();
		    }
		}
		d = s.nextInt();
		int[] freq = new int[d];
		for(int i=0; i<d; i++) freq[i]=0;
		for(int i=0; i<r; i++) {
		    for(int j=0; j<c; j++) {
		        arr[i][j] %= d;
		        freq[arr[i][j]]++;
		    }
		}
		int k=0;
		for(int i=0; i<r; i++) {
		    for(int j=0; j<c; j++) {
		        if(freq[k]>0) {
		            System.out.print(k);
		            System.out.print(" ");
		            freq[k]--;
		        }
		        if(freq[k]==0) k++;
		    }
		    System.out.println();
		}
	}
}
