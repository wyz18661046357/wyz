package wyz;
import java.util.Scanner;
public class GoodLuck {
       public static void main(String[] args){
    	   Scanner input=new Scanner(System.in);
    	   System.out.println("������4λ��Ա���ţ�");    
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
    	   System.out.println("��Ա����"+card1+"��λ֮�ͣ�"+num);  
    	   System.out.println("�����˿ͻ���"+a);   
       }
}
