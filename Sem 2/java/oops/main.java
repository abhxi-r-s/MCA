class rectangle {
    int a=2;
    int b=2;
    void area(){
        System.out.println("Area is "+(a*b));
    }
}
class main{
    public static void Main(String[] args){
        rectangle r=new rectangle();
        r.area();
    }
}