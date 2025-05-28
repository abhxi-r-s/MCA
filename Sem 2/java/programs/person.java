public class person {
    
    int age;
    String name;

    person(String name,int age){
        this.name=name;
        this.age=age;

    }
    void display()
    {
        System.out.println("Name:"+name+" Age:"+age);
    }
    // creating an array of objects for the class person
    public static void main(String[] args)
    {
        person p[] =new person[3];
        // person[] p =new person[3]; Both ways possible

        // initializing objects
        p[0]=new person("Abc", 23);
        p[1]=new person("def", 24);
        p[2]=new person("ghi", 25);
        
        // accessing objects in the array 
        // for(person p1:p){
        //     p1.display();
        // }
        
        for(int i=0;i<3;i++)
        {
            p[i].display();
            
        }

    }
}
