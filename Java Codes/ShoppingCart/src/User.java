public class User {
    private String userName;
    private int balance;
    private String password;

    User(){}
    User(String userName, int balance, String password){
        this.userName = userName;
        this.balance = balance;
        this.password = password;
    }
    String getUserName(){
        return userName;
    }
    int getBalance(){
        return balance;
    }
    void setUserName(String userName){
        this.userName = userName;
    }
    void setBalance(int balance){
        this.balance = balance;
    }
    String getPassword(){
        return password;
    }
    void setPassword(String password){
        this.password = password;
    }
    void addBalance(int balance){
        this.balance += balance;
    }

    @Override
    public String toString() {
        return "Username: "+userName +"\nBalance: "+balance;
    }
}
