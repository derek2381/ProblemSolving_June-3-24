// problem link
// https://codeforces.com/problemset/problem/1977/A


import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- != 0){
            int a = sc.nextInt();
            int b = sc.nextInt();

            if(a >= b && (a-b)%2 == 0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
