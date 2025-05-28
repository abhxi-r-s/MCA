class square {
    int a;
    void getValue(int x)
    {
        a=x;
    }
    void area()
    {
        System.out.println("Area is "+(a*a));
    }
  

    public static void main(String[] args)
    {
    square sq=new square();
    int k=8;
    sq.getValue(k);
    sq.area();
    }
    
}
