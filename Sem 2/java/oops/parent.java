public class parent {

    parent() {
        System.out.println("This is parent class");
    }
}

class child extends parent {

    child() {
        System.out.println("This is a child class");
    }
    public static void main(String[] args)
    {
        child c=new child();
        // System.out.println(c);

    }
}

