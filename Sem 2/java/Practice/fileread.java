import java.io.*;
import java.util.*;
public class fileread {
    public static void main(String[] args)
    {
        String file;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the file name to read :");
        file=sc.nextLine();
        try{
                     
            FileReader reader= new FileReader(file);
            int character;

            while((character=reader.read())!=-1)
            {
                System.out.print((char)character);
            }
            reader.close();

        }
        catch(IOException e)
        {
            System.out.println("Unable to Read");
            e.printStackTrace();

        }
     sc.close();   
    }
}
