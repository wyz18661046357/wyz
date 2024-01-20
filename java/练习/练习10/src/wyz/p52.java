package wyz;
import java.util.Scanner;
public class p52 {
       public static void main(String[] args){
    	   System.out.println("请输入当前的华氏温度：");
    	   Scanner input=new Scanner(System.in);
    	   double huaShi=input.nextDouble();
    	   double sheShi=5/9.0*(huaShi-32);
    	   System.out.println("当前的摄氏温度为："+sheShi);
       }
}
