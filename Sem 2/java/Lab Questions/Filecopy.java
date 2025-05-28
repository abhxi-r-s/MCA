import java.io.*;

public class Filecopy {
    
    public static void main(String[] args) {
        
        try{
            FileReader Reader= new FileReader("Example2.txt");
            FileWriter Writer = new FileWriter("Example1.txt");

            int character;
            while((character= Reader.read())!=-1)
            {
                Writer.write((char) character);

            }
            System.out.println("File Copy complete");

            Reader.close();
            Writer.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to copy");
            e.printStackTrace();
        }
    }
}
