public class Bill
{
    public static void main(String[] args) 
    {
        Order[] orders = new Order[2];
        orders[0] = new Order("Rice", 30);
        orders[1] = new Order("Pasta", 40);

        System.out.println("The first order is " + orders[0].getOrderName() + " and its price is " + orders[0].getOrderPrice());
        System.out.println("The second order is " + orders[1].getOrderName() + " and its price is " + orders[1].getOrderPrice());
        System.out.println("The number of orders are " + Order.NumberOfOrders + " The bill is " + getBill(orders))
        ;
    }

    public static double getBill(Order [] order)
    {
        double bill = 0.0;
        for (int i = 0; i < order.length; i++)
        {
            bill += (order[i].getOrderPrice());
        }
        return bill;
    }
}