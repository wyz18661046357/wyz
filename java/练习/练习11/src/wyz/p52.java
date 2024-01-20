package wyz;
import java.util.Scanner;
public class p52 {
       public static void main(String[] args){
    	   System.out.println("请输入本金：");
    	   Scanner input=new Scanner(System.in);
    	   double benJin=input.nextDouble();
    	   System.out.println("本金为："+benJin+"\n");
    	   double yiNian=0.0225;
    	   double liangNian=0.027;
    	   double sanNian=0.0324;
    	   double wuNian=0.036;
    	   System.out.println("存取一年后的本息是："+(benJin+benJin*yiNian*1)+"\n");
    	   System.out.println("存取两年后的本息是："+(benJin+benJin*liangNian*2)+"\n");
    	   System.out.println("存取三年后的本息是："+(benJin+benJin*sanNian*3)+"\n");
    	   System.out.println("存取五年后的本息是："+(benJin+benJin*wuNian*5)+"\n");
       }
}
