// Ex7
public class Loop {
    public static void main(String[] args) {
        System.out.println("Print from 1 -> 10 with \"While\" loop");
        Integer a = 1;
        while (a < 11) {
            System.out.println(a);
            a++;
        }
        System.out.println("Print from 1 -> 10 with \"For\" loop");
        for (Integer i = 1; i <= 10; i++) {
            System.out.println(i);
        }
    }
}