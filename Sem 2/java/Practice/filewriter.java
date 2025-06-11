import java.util.Scanner;
import java.io.*;

public class filewriter
{
    public static void main(String[] args)
    {
        String file,content;
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the file name to create :");
        file=sc.nextLine();
        System.out.println("Enter the content ");
        content=sc.nextLine();
        try
        {
            FileWriter writer = new FileWriter(file);
            writer.write(content);
            writer.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to write content");
            e.printStackTrace();
        }
        
        sc.close();

    }
}