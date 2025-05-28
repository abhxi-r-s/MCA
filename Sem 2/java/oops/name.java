public class name {
    public static void main(String[] args)
    {
        StringBuffer ch = new StringBuffer("abc");
        System.out.println(ch);
        // StringBuffer Sb=ch.append("xyz");
        // System.out.println(Sb);
        // String s=new String("mno");
        // String c=sb.append("qrs");
        StringBuffer k=ch.insert(2,"mno");
        System.out.println(k);
        StringBuffer d=ch.delete(2,4);
        System.out.println(d);

    }
}
