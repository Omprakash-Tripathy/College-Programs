//package bank;

class Account
{
    public String name;
    protected String email;
    private String password;

    //getters and setters
    public String getPassword()
    {
        setPassword("randomPass");
        return this.password;
    }

    private void setPassword(String pass)
    {
        this.password = pass;
    }
}

public class bank
{
    public static void main(String args[])
    {
        Account account1 = new Account();
        account1.name = "customer1";
        account1.email = "kingom247@gmail.com";
        // account1.password = "abcd";
        // account1.setPassword("abcd");
        System.out.println(account1.getPassword());
    }
}