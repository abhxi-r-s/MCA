public class human{

    public static void main(String a[]){

        int i=2,j=4,sum=0;
        hai h=new hai();
        sum=h.add(i,j);
        System.out.println("Sum is"+sum);
    }
    
}
class hai{

    int add(int k,int l)
    {
        int r =k+l;
        return r;

    }
    
}
