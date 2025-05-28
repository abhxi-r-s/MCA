// public class array {
//     public static void main(String[] args)
//     {
//         int[] arr={1,2,3,4,5,6};
//         int n=arr.length;
        
//         for(int i=0;i<n;i++)
//         {
//             System.out.print(arr[i]+" ");
//         }
//     }
// }
import java.util.*;
public class array {
    public static void main(String[] args ){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of elements: ");
        int size=sc.nextInt();
        int[] arr=new int[size];
        for(int i=0; i<size; i++){
            System.out.print("Enter element "+(i+1)+": ");
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}
