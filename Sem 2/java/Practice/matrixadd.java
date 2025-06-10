import java.util.*;

class Matrix {
    int row, col;
    int m[][];

    void getdetails() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the matrix row and column:");
        row = sc.nextInt();
        col = sc.nextInt();
        m = new int[row][col];

        System.out.println("Enter the matrix values:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                m[i][j] = sc.nextInt();
            }
        }
    }

    void addmatrix(Matrix a, Matrix b) {
        if (a.row == b.row && a.col == b.col) {
            this.row = a.row;
            this.col = a.col;
            this.m = new int[row][col];

            for (int i = 0; i < a.row; i++) {
                for (int j = 0; j < a.col; j++) {
                    this.m[i][j] = a.m[i][j] + b.m[i][j];
                }
            }
        } else {
            System.out.println("Matrix dimensions do not match for addition.");
        }
    }

    void display() {
        System.out.println("Resultant Matrix:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(m[i][j] + " ");
            }
            System.out.println();
        }
    }
}

public class matrixadd {
    public static void main(String[] args) {
        Matrix a = new Matrix();
        Matrix b = new Matrix();
        Matrix c = new Matrix();

        a.getdetails();
        b.getdetails();
        c.addmatrix(a, b);
        c.display();
    }
}
