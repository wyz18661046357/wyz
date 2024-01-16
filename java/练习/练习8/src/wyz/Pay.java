package wyz;
import java.util.Scanner;
public class Pay {
       public static void main(String[] args){
    	   int shirtPrice=245;
    	   int shoePrice=570;
    	   int padPrice=320;
    	   System.out.println("«Î ‰»Î’€ø€£∫");
    	   Scanner input=new Scanner(System.in);
    	   double discount=input.nextDouble();
    	   boolean shirt=(shirtPrice*discount)<100;
    	   boolean shoe=(shoePrice*discount)<100;
    	   boolean pad=(padPrice*discount)<100;
    	   System.out.println("T–Ù’€ø€º€µÕ”⁄100¬£ø"+shirt);
    	   System.out.println("Õ¯«Ú–¨’€ø€º€µÕ”⁄100¬£ø"+shoe);
    	   System.out.println("Õ¯«Ú≈ƒ’€ø€º€µÕ”⁄100¬£ø"+pad);
       }
}
