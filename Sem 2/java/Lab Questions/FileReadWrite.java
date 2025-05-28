// import java.util.*;
import java.io.*;

public class FileReadWrite{
    public static void main(String[] args) {
        try{
            FileWriter Writer= new FileWriter("Exam.txt");
            Writer.write("Exam Demo text");
            Writer.close();
            System.out.println("File Written Successfull");
        }
        catch(IOException e)
        {
            System.out.println("Writing fail");
            e.printStackTrace();
        }

        try{
            FileReader Reader= new FileReader("Exam.txt");
            int character;

            while((character=Reader.read())!=-1)
            {
                System.out.println((char) character);
            }
        }
        catch(IOException e)
        {
            System.out.println("Unable to read");
            e.printStackTrace();
            
        }
        
    }
}