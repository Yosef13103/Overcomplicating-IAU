public class Order {
    public static int NumberOfOrders = 0;
    private String orderName;
    private double orderPrice;

    public Order(String orderName, double orderPrice) 
    {   
        this.orderName = orderName;
        this.orderPrice = orderPrice;
        NumberOfOrders++;
    }

    public int getNumberOfOrders() {
        return NumberOfOrders;
    }

    public String getOrderName() {
        return orderName;
    }

    public double getOrderPrice() {
        return orderPrice;
    }
}
