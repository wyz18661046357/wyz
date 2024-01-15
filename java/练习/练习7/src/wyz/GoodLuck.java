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
    	   System.out.println("会员卡号"+card+"各位之和："+num);  
    	   System.out.println("是幸运客户吗？"+a);   
       }
}

//参考解决方案
/*
package wyz;
import java.util.Scanner;
public class GoodLuck {
       public static void main(String[] args){
    	   int custNo;//客户会员号（说明：customer指客户）
    	   
    	   //输入会员卡号
    	   System.out.println("请输入4位会员卡号：");    
    	   Scanner input=new Scanner(System.in);
    	   custNo=input.nextInt();
    	   
    	   //获得每位数字
    	   int gewei=custNo%10;//分解获得个位数
    	   int shiwei=custNo/10%10;//分解获得十位数
    	   int baiwei=custNo/100%10;//分解获得百位数
    	   int qianwei=custNo/1000;//分解获得千位数
    	   
    	   //计算数字之和
    	   int sum=gewei+shiwei+baiwei+qianwei;
    	   System.out.println("会员卡号"+custNo+"各位之和："+sum);  
    	   boolean isLuck=sum>20;
    	   System.out.println("是幸运客户吗？"+isLuck);   
       }
}
*/