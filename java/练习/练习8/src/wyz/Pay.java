package wyz;
import java.util.Scanner;
public class Pay {
       public static void main(String[] args){
    	   int shirtPrice=245;
    	   int shoePrice=570;
    	   int padPrice=320;
    	   System.out.println("�������ۿۣ�");
    	   Scanner input=new Scanner(System.in);
    	   double discount=input.nextDouble();
    	   boolean shirt=(shirtPrice*discount)<100;
    	   boolean shoe=(shoePrice*discount)<100;
    	   boolean pad=(padPrice*discount)<100;
    	   System.out.println("T���ۿۼ۵���100��"+shirt);
    	   System.out.println("����Ь�ۿۼ۵���100��"+shoe);
    	   System.out.println("�������ۿۼ۵���100��"+pad);
       }
}
