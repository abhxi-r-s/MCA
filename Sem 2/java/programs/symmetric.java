import java.util.Scanner;

public class symmetric {

    public static void main(String[] args) {
        int arr[][]=new int[100][100];
        int arrT[][]=new int[100][100];
        int num;
        boolean condition = true;
        Scanner sc=new Scanner(System.in);
         // Transpose of matrix

         System.out.print("Enter the size of row: ");
         int a4 = sc.nextInt();
         System.out.print("Enter the size of column: ");
         int b4 = sc.nextInt();
         System.out.println();
         for (int k = 0; k < a4; k++) {
             for (int j = 0; j < b4; j++) {
                 System.out.print("Enter the value (" + k + "," + j + ") :");
                 num = sc.nextInt();
                 arr[k][j] = num;
             }
         }
         System.out.println("Original Matrix");
         for(int i = 0; i < a4; i++){
             for(int j = 0; j< b4; j++){
                 System.out.print(arr[i][j] + " ");
             }
             System.out.println();
         }
         System.out.println("Transpose of Matrix");
         for (int i = 0; i <= a4; i++) {
             for (int j = 0; j <= b4; j++) {
                 arrT[i][j] = arr[j][i];
             }
         }
         for (int k = 0; k < b4; k++) {
             for (int j = 0; j < a4; j++) {
                 System.out.print(arrT[k][j] + " ");
             }
             System.out.println();
         }
         for (int i = 0; i <= a4; i++) {
            for (int j = 0; j <= b4; j++) {
                
                if(arrT[i][j] != arr[i][j])
                {
                    condition=false;
                    break;
                }
                                  
                
            }
        }
        
        if(condition==true)
        {
            System.out.println("Matrix is symmetric");
        }
        else{
            System.out.println("Matrix is not symmetric");
        }
         
    }
    
}
