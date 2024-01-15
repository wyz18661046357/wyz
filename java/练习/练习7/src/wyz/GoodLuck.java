package wyz;
import java.util.Scanner;
public class GoodLuck {
       public static void main(String[] args){
    	   Scanner input=new Scanner(System.in);
    	   System.out.println("请输入4位会员卡号：");    
    	   int card=input.nextInt();
    	   int card1=card;
    	   int num=0;
    	   num=num+card1%10;
    	   card1=card1/10;
    	   num=num+card1%10;
    	   card1=card1/10;
    	   num=num+card1%10;
    	   card1=card1/10;
    	   num=num+card1%10;
    	   card1=card1/10;
    	   boolean a=num>20;
    	   System.out.println("会员卡号"+card1+"各位之和："+num);  
    	   System.out.println("是幸运客户吗？"+a);   
       }
}
