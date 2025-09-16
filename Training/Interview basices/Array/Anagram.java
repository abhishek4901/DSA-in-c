//  //that code run correctly on online complier but not in vs code

import java.util.Arrays;
public class Anagram {
    public static void main(String[] args) {
        String stra = "abhi";
        String strb = "abih";

        char[] str1 = stra.toLowerCase().toCharArray();
        char[] str2 = strb.toLowerCase().toCharArray();

        // Sort both arrays
        Arrays.sort(str1);
        Arrays.sort(str2);

        // Compare sorted arrays
        if (Arrays.equals(str1, str2)) {
            System.out.println("They are anagram strings.");
        } else {
            System.out.println("They are not anagram strings.");
        }
    }
}

