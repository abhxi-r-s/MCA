import java.io.*;

public class FileEvenodd {
    
    public static void main(String[] args) {
        
        try{
            FileReader Reader = new FileReader("demo.txt");
            FileWriter Writer1= new FileWriter("Even.txt");
            FileWriter Writer2= new FileWriter("Odd.txt");

            int character;
            
            while((character=Reader.read())!=-1)
            {
                if(character%2==0)
                {
                    Writer1.write(character);
                }
                else{
                    Writer2.write(character);
                }
            }
            Reader.close();
            Writer1.close();
            Writer2.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to Write");
            e.printStackTrace();
        }

    }
}
