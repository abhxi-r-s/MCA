import java.util.Scanner;

public class arraysearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[100];
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        System.out.println();
        for (int i=0; i<size; i++){
            System.out.print("Enter values: ");
            int val = sc.nextInt();
            arr[i] = val;
        }
        for (int i=0; i<size; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        System.out.print("Enter the element to search: ");
        int ele = sc.nextInt();
        int flag = 0;
        int pos=0;
        for (int i=0; i<size; i++){
            if(ele==arr[i]){
                flag = 1;
                pos = i;
                break;
            }
        }
        if(flag == 1){
            System.out.print(ele+" found at position "+(pos+1));
        }
        else{
            System.out.print(ele+" not found!");
        }
    }
    
}
