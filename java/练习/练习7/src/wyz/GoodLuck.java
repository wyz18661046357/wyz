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
    	   System.out.println("��Ա����"+card+"��λ֮�ͣ�"+num);  
    	   System.out.println("�����˿ͻ���"+a);   
       }
}

//�ο��������
/*
package wyz;
import java.util.Scanner;
public class GoodLuck {
       public static void main(String[] args){
    	   int custNo;//�ͻ���Ա�ţ�˵����customerָ�ͻ���
    	   
    	   //�����Ա����
    	   System.out.println("������4λ��Ա���ţ�");    
    	   Scanner input=new Scanner(System.in);
    	   custNo=input.nextInt();
    	   
    	   //���ÿλ����
    	   int gewei=custNo%10;//�ֽ��ø�λ��
    	   int shiwei=custNo/10%10;//�ֽ���ʮλ��
    	   int baiwei=custNo/100%10;//�ֽ��ð�λ��
    	   int qianwei=custNo/1000;//�ֽ���ǧλ��
    	   
    	   //��������֮��
    	   int sum=gewei+shiwei+baiwei+qianwei;
    	   System.out.println("��Ա����"+custNo+"��λ֮�ͣ�"+sum);  
    	   boolean isLuck=sum>20;
    	   System.out.println("�����˿ͻ���"+isLuck);   
       }
}
*/