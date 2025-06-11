import java.util.*;
import java.io.*;

public class filecopy {

    public static void main(String[] args)
    {
        String src,dest;
        int character;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the source file:");
        src=sc.nextLine();
        System.out.println("Enter the destination file:");
        dest=sc.nextLine();

        try{
            FileReader reader= new FileReader(src);
            FileWriter writer = new FileWriter(dest);
            while((character=reader.read())!=-1)
            {
                writer.write((char)character);
            }
            reader.close();
            writer.close();
        }
        catch(IOException e)
        {
            System.out.println("Unablr to transfer");
            e.printStackTrace();

        }
        sc.close();
        System.out.println("The content of new file");
        int ch;
        try{
            FileReader reading= new FileReader(dest);
            while((ch=reading.read())!=-1)
            {
                System.out.print((char)ch);
            }
             reading.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to read new file");
            e.printStackTrace();
        }
        
       
    }
    
}
