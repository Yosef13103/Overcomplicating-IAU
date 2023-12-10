//2210009123 - Yosef Ahmed - 9M2
//Lab 1 & 2 - Assignment 1
public class Assignment1_2210009123{
    public static void main(String[] args) throws Exception {
        int [] arr1 = {52, 123, 3, -4, 78, 17}; //1D array of size 6
        int [][] arr2 = 
        {
            {87, -76, 73, 4},
            {5, 46, 127, 86},
            {4, 10, 61, 92}
        }; //2D array of size 3x4

        // QUESTIONS:
        //1. To find the MAXIMUM values in arr1 and arr2.
        
        int max1 =arr1[0];
        for (int i = 0; i < arr1.length; i++) 
        {
            if (arr1[i] > max1) 
            {
                max1 = arr1[i];
            }
        }
        System.out.println("1. \nMax value in arr1 is: " + max1);

        int max2 = arr2[0][0];
        for (int i = 0; i < arr2.length; i++) 
        {
            for (int j = 0; j < arr2[i].length; j++) 
            {
                if (arr2[i][j] > max2) 
                {
                    max2 = arr2[i][j];
                }
            }
        }
        System.out.println("Max value in arr2 is: " + max2);
    
        //3. To find the AVERAGE of array values for each array: arr1 and arr2
        
        int sum1 = 0;
        for (int i = 0; i < arr1.length; i++)
        {
            sum1 += arr1[i];
        }
        double avg1 = (double)sum1 / arr1.length;
        System.out.println("\n2. \nAverage value in arr1 is: " + avg1);

        int sum2 = 0;
        for (int i = 0; i < arr2.length; i++) 
        {
            for (int j = 0; j < arr2[i].length; j++) 
            {
                sum2 += arr2[i][j];
            }
        }
        double avg2 = (double)sum2 / (arr2.length * arr2[0].length);
        System.out.println("Average value in arr2 is: " + avg2);

        //5. Print all EVEN numbers available in arr1 and in arr2
        
        System.out.println("\n3. \nEven numbers in arr1 are: ");
        for (int i = 0; i < arr1.length; i++) 
        {
            if (arr1[i] % 2 == 0) 
            {
                System.out.print(arr1[i] + " ");
            }
        }

        System.out.println("\nEven numbers in arr2 are: ");
        for (int i = 0; i < arr2.length; i++) 
        {
            for (int j = 0; j < arr2[i].length; j++) 
            {
                if (arr2[i][j] % 2 == 0) 
                {
                    System.out.print(arr2[i][j] + " ");
                }
            }
        }

        //7. Print SQUARE of the numbers for each array: arr1 and arr2
        
        System.out.println("\n\n4. \nSquare of numbers in arr1 are: ");
        for (int i = 0; i < arr1.length; i++) 
        {
            System.out.print(arr1[i] * arr1[i] + " ");
        }

        System.out.println("\nSquare of numbers in arr2 are: ");
        for (int i = 0; i < arr2.length; i++) 
        {
            for (int j = 0; j < arr2[i].length; j++) 
            {
                System.out.print(arr2[i][j] * arr2[i][j] + " ");
            }
            System.out.println("");
        }

        //9. Create array (arr5={{1,1,2},{2,5,2}, {4,4,4},{3,0,0}}). Then, find the MULTIPLICATION of arr2 and arr5. Store the result in a new array: arr6.
        
        //Arr2 is 3x4 and arr5 is 4x3. So, arr6 is 3x3.
        int [][] arr5 = 
        {
            {1, 1, 2},
            {2, 5, 2},
            {4, 4, 4},
            {3, 0, 0}
        };
        int [][] arr6 = new int [3][3];
        for (int i = 0; i < 3; i++)  //Row of arr2 (3)
        {
            for (int j = 0; j < 3; j++) //Col of arr5 (3)
            {
                for (int k = 0; k < 4; k++) //row and col of arr2 and arr 5 (4)
                {
                    arr6[i][j] += arr2[i][k] * arr5[k][j];
                }
            }
        }
        //Printing arr6
        System.out.println("\n5. \nMultiplication of arr2 and arr5 is: ");
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                System.out.print(arr6[i][j] + " ");
            }
            System.out.println("");
        }
    }
}
