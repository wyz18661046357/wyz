package wyz;

public class p52 {
       public static void main(String[] args){
    	   int left=10;
    	   int right=8;
    	   int num;
    	   System.out.println("输出互换前手中的纸牌：");
    	   System.out.println("左手中的纸牌："+left);
    	   System.out.println("右手中的纸牌："+right+"\n");
    	   num=left;
    	   left=right;
    	   right=num;
    	   System.out.println("输出互换后手中的纸牌：");
    	   System.out.println("左手中的纸牌："+left);
    	   System.out.println("右手中的纸牌："+right);
       }
}
