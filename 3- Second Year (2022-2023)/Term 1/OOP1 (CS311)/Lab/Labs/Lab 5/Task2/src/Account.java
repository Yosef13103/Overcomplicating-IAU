import java.util.Date;

public class Account {
    private int id;
    private double balance, annualInterestRate;
    private Date dateCreated;
    
    public Account()
    {
        this.id = 0;
        this.balance = 0;
        this.annualInterestRate  = 0;
    }

    public Account(int id, double balance, double annualInterestRate) {
       setId(id);
       setBalance(balance);
       setAnnualInterestRate(annualInterestRate);
       setDateCreated(new Date());
    }

    //getters
    public int getId() {
        return id;
    }
    public double getBalance() {
        return balance;
    }
    public double getAnnualInterestRate() {
        return annualInterestRate;
    }
    public Date getDateCreated() {
        return dateCreated;
    }

    //setters
    public void setId(int id) {
        this.id = id;
    }
    public void setBalance(double balance) {
        this.balance = balance;
    }
    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }
    public void setDateCreated(Date dateCreated) {
        this.dateCreated = dateCreated;
    }

    //methods
    public double getMonthlyInterestRate() {
        return annualInterestRate/12.0;
    }

    public double getMonthlyInterest()
    {
        return (balance * getAnnualInterestRate());
    }

    public double withdraw(double amount) 
    {
        double newBalance = balance -= amount;
        setBalance(newBalance);
        return newBalance;
    }
    public double deposit(double amount) 
    {
        double newBalance = balance += amount;
        setBalance(newBalance);
        return newBalance;
    }
}
