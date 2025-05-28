public class multilevel {
    multilevel()
    {
        System.out.println("Its GrandFather");
    }
}
class middlelevel extends multilevel{

    middlelevel()
    {
        System.out.println("Its Father");
    }
}
class lowlevel extends middlelevel{

    lowlevel()
    {
        System.out.println("Son");
    }
    public static void main(String[] args)
    {
        lowlevel l=new lowlevel();
        System.out.println(l);
    }
}
