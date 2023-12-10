public class Task2 {
    public static void main(String[] args) throws Exception {
        Account account1 = new Account(1122, 20000, (4.5/100));
        System.out.println("Your ID: " + account1.getId());
        System.out.println("Your balance: " + account1.getBalance());
        System.out.println("Your Annual Interest Rate: " + (account1.getAnnualInterestRate()*100) + "%");
        System.out.println("Date of Creation of Account: " + account1.getDateCreated() + "\n");
        
        account1.withdraw(2500);
        System.out.println("Your new balance after withdrawal of 2,500: " + account1.getBalance());
        account1.deposit(3000);
        System.out.println("Your new balance after deposit of 3,000: " + account1.getBalance());
    } 
}
