// Yosef Ahmed - 2210009123 - 9M2 - CS310 Quiz 2
//Converting Decimal to Octal using Stacks

public class LQ2_2210009123 {

    public static void decimalToOctal(int decimal) {
        System.out.println("Decimal: " + decimal + "\nOctal:");
        StackArray s = new StackArray(20);
        while (decimal > 0)
        {
            int octal = decimal % 8;
            s.push(octal); // Push digit into stack
            decimal = decimal / 8;
        }

        while (!s.isEmpty())
        {
            System.out.print(s.pop());
        }

        System.out.println();
    }

    public static void main(String[] args) {
        decimalToOctal(1); //Should be 1
        decimalToOctal(7); //Should be 7
        decimalToOctal(8); //Should be 10
        decimalToOctal(12); //Should be 14
        decimalToOctal(16); //Should be 20
        decimalToOctal(20); //Should be 24
        decimalToOctal(35); //Should be 43
        decimalToOctal(100); //Should be 144

    }

}
