package wyz;
import java.util.Scanner;
public class p52 {
       public static void main(String[] args){
    	   System.out.println("�����뱾��");
    	   Scanner input=new Scanner(System.in);
    	   double benJin=input.nextDouble();
    	   System.out.println("����Ϊ��"+benJin+"\n");
    	   double yiNian=0.0225;
    	   double liangNian=0.027;
    	   double sanNian=0.0324;
    	   double wuNian=0.036;
    	   System.out.println("��ȡһ���ı�Ϣ�ǣ�"+(benJin+benJin*yiNian*1)+"\n");
    	   System.out.println("��ȡ�����ı�Ϣ�ǣ�"+(benJin+benJin*liangNian*2)+"\n");
    	   System.out.println("��ȡ�����ı�Ϣ�ǣ�"+(benJin+benJin*sanNian*3)+"\n");
    	   System.out.println("��ȡ�����ı�Ϣ�ǣ�"+(benJin+benJin*wuNian*5)+"\n");
       }
}
