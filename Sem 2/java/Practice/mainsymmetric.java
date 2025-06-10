import java.util.*;

class symmetric {
    int row,col;
    int m[][],check;
        symmetric()
        {
            check=0;
        }
    void getdetails()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the matrix :");
        row=sc.nextInt();
        col=sc.nextInt();
        m = new int[row][col];
        System.out.println("Enter the matrix data");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                m[i][j]=sc.nextInt();
            }
        }

    }

    void checksymmetric(symmetric s)
    {
        for(int i=0;i<s.row;i++)
        {
            for(int j=0;j<s.col;j++)
            {
                this.m[i][j]=s.m[j][i];
            }
        }

        for(int i=0;i<s.row;i++)
        {
            for(int j=0;j<s.col;j++)
            {
                if(this.m[i][j]==s.m[i][j])
                {
                    check=1;
                }
            }
        }

        if(check==1)
        {
            System.out.println("Matrix is Symmetric");
        }
        else
        {
            System.out.println("Matrix is not Symmetric");
        }
    }
    
}
public class mainsymmetric
{
    public static void main(String[] args)
    {
        symmetric s = new symmetric();
        symmetric c = new symmetric();

        s.getdetails();
        c.getdetails();
        s.checksymmetric(c);

    }
}