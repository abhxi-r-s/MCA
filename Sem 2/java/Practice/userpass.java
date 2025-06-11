import java.util.*;

public class userpass extends RuntimeException {

    userpass(String s)
    {
        super(s);
    }
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        String validusername="admin";
        String validpassword="12345";

        String user;
        String password;

        System.out.println("WELCOME TO HOME PAGE");
        System.out.println("Login");

        System.out.println("Enter the login id");
        try
        {
            user=sc.nextLine();
            if(!user.equals(validusername))
            {
                throw new userpass("Invalid username");
            }
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
            System.exit(0);
        }
        System.out.println("Enter your password :");
        try
        {
            password=sc.nextLine();
            if(!password.equals(validpassword))
            {
                throw new userpass("Invalid password");
            }
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
            System.exit(0);
        }
        
    }
    
}
