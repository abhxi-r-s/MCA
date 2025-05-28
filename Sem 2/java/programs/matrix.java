import java.util.*;

public class matrix {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = 0;
        Boolean condition=true;
        int arr1[][] = new int[100][100];
        int arr2[][] = new int[100][100];
        int arr3[][] = new int[100][100];
        int arr4[][] = new int[100][100];

        
        while (condition) {
        System.out.print("Matrix Operations: \n1.Addition\n2.Substraction\n3.Multiplication\n4.Transpose\n5.Exit\nEnter Operation: ");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:

            //Adition of matrix

                System.out.print("Enter the size of row: ");
                int a = sc.nextInt();
                System.out.print("Enter the size of column: ");
                int b = sc.nextInt();
                if (a == b) {
                    System.out.print("Enter the values of first matrix: ");
                    System.out.println();
                    for (int k = 0; k < a; k++) {
                        for (int j = 0; j < b; j++) {
                            System.out.print("Enter the value (" + k + "," + j + ") :");
                            num = sc.nextInt();
                            arr1[k][j] = num;
                        }
                    }
                    System.out.print("Enter the values of second matrix: ");
                    System.out.println();
                    for (int k = 0; k < a; k++) {
                        for (int j = 0; j < b; j++) {
                            System.out.print("Enter the value (" + k + "," + j + ") :");
                            num = sc.nextInt();
                            arr2[k][j] = num;
                        }
                    }
                    System.out.println("Addition of Matrix");
                    for (int k = 0; k < a; k++) {
                        for (int j = 0; j < b; j++) {
                            arr3[k][j] = arr1[k][j] + arr2[k][j];
                        }
                    }
                    for (int k = 0; k < a; k++) {
                        for (int j = 0; j < b; j++) {
                            System.out.print(arr3[k][j] + " ");
                        }
                        System.out.println();
                    }

                }
                else{
                    System.out.println("Unable to Solve matrix with different index");
                }
                break;


            case 2:

            // Substraction of matrix

                System.out.print("Enter the size of row: ");
                int a2 = sc.nextInt();
                System.out.print("Enter the size of column: ");
                int b2 = sc.nextInt();
                if (a2 == b2) {
                    System.out.print("Enter the values of first matrix: ");
                    System.out.println();
                    for (int k = 0; k < a2; k++) {
                        for (int j = 0; j < b2; j++) {
                            System.out.print("Enter the value (" + k + "," + j + ") :");
                            num = sc.nextInt();
                            arr1[k][j] = num;
                        }
                    }
                    System.out.print("Enter the values of second matrix: ");
                    System.out.println();
                    for (int k = 0; k < a2; k++) {
                        for (int j = 0; j < b2; j++) {
                            System.out.print("Enter the value (" + k + "," + j + ") :");
                            num = sc.nextInt();
                            arr2[k][j] = num;
                        }
                    }
                    
                    System.out.println("substraction of Matrix");
                    for (int k = 0; k < a2; k++) {
                        for (int j = 0; j < b2; j++) {
                            arr3[k][j] = arr1[k][j] - arr2[k][j];
                        }
                    }
                    for (int k = 0; k < a2; k++) {
                        for (int j = 0; j < b2; j++) {
                            System.out.print(arr3[k][j] + " ");
                        }
                        System.out.println();
                    }
                }
                else{
                    System.out.println("Unable to Solve matrix with different index");
                }
                break;



            case 3:

            //Multiplication of matrix 

            System.out.print("Enter the size of 1st matrix row: ");
            int aa1 = sc.nextInt();
            System.out.print("Enter the size of 1st matrix column: ");
            int bb1 = sc.nextInt();
            System.out.print("Enter the size of 2nd matrix row: ");
            int aa2 = sc.nextInt();
            System.out.print("Enter the size of 2nd matrix column: ");
            int bb2 = sc.nextInt();
            if (aa1 == bb2){
                    System.out.print("Enter the values of first matrix: ");
                    System.out.println();
                    for (int k = 0; k < aa1; k++) {
                        for (int j = 0; j < bb1; j++) {
                            System.out.print("Enter the value (" + k + "," + j + ") :");
                            num = sc.nextInt();
                            arr1[k][j] = num;
                        }
                    }
                    System.out.print("Enter the values of second matrix: ");
                    System.out.println();
                    for (int k = 0; k < aa2; k++) {
                        for (int j = 0; j < bb2; j++) {
                            System.out.print("Enter the value (" + k + "," + j + ") :");
                            num = sc.nextInt();
                            arr2[k][j] = num;
                        }
                    }
                    System.out.println("Multiplication of Matrix");
                    for (int i = 0; i < aa1; i++) {
                        for (int j = 0; j < bb1; j++) {
                            for (int k = 0; k < aa2; k++) {
                                arr4[i][j] += arr1[i][k] * arr2[k][j];
                            }
    
                        }
                    }
                    for (int k = 0; k < aa1; k++) {
                        for (int j = 0; j < bb2; j++) {
                            System.out.print(arr4[k][j] + " ");
                        }
                        System.out.println();
                    }
                }
                else{
                    System.out.println("Unable to Solve matrix with different index");
                }

                break;
                
                
            case 4:

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
                        arr1[k][j] = num;
                    }
                }
                System.out.println("Original Matrix");
                for(int i = 0; i < a4; i++){
                    for(int j = 0; j< b4; j++){
                        System.out.print(arr1[i][j] + " ");
                    }
                    System.out.println();
                }
                System.out.println("Transpose of Matrix");
                for (int i = 0; i <= a4; i++) {
                    for (int j = 0; j <= b4; j++) {
                        arr3[i][j] = arr1[j][i];
                    }
                }
                for (int k = 0; k < b4; k++) {
                    for (int j = 0; j < a4; j++) {
                        System.out.print(arr3[k][j] + " ");
                    }
                    System.out.println();
                }
                break;
                case 5:
                condition=false;
                    break;
        }
        }
    }
}
