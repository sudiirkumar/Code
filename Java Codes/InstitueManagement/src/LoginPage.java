import javax.swing.*;
import java.awt.*;
import java.sql.*;

public class LoginPage extends JFrame {
    static String username,password;
    public static String name;
    JButton loginButton,homeButton;
    JLabel loginTxt,usernameTxt,passwordTxt,forgotTxt;
    JTextField usernameField;
    JPasswordField passwordField;
    LoginPage(){
        init();
    }
    private void init(){
        loginButton = new JButton();
        homeButton = new JButton();
        loginTxt = new JLabel();
        usernameTxt = new JLabel();
        passwordTxt = new JLabel();
        forgotTxt = new JLabel();
        usernameField = new JTextField();
        passwordField = new JPasswordField();

        setTitle(Main.instituteName);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
        setResizable(false);
        setBounds(200,100,600,400);
        setLayout(null);

        loginButton.setText("Login");
        loginButton.setFocusPainted(false);
        loginButton.setBackground(Color.DARK_GRAY);
        loginButton.setForeground(Color.white);
        loginButton.addActionListener(e -> {
            username = usernameField.getText();
            password = new String(passwordField.getPassword());
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                PreparedStatement st= conn.prepareStatement("SELECT is_admin,name from users where (username=? and password=?)");
                st.setString(1, username);
                st.setString(2, password);
                ResultSet rs=st.executeQuery();
                if(rs.next()){
                    boolean isAdmin = rs.getBoolean("is_admin");
                    name = rs.getString("name");
                    dispose();
                    JOptionPane.showMessageDialog(loginButton, "You have successfully logged in");
                    if(isAdmin){
                        new AdminWelcomePage();
                    }
                    else{
                        new TeacherWelcomePage();
                    }
                }
                else
                    JOptionPane.showMessageDialog(loginButton, "Incorrect password or username.");
            }
            catch(Exception ex) {
                System.out.println(ex);
                JOptionPane.showMessageDialog(loginButton, "Server Error");
            }
        });
        homeButton.setText("Home");
        homeButton.setFocusPainted(false);
        homeButton.setOpaque(false);
        homeButton.setBorderPainted(false);
        homeButton.setBackground(Color.white);
        homeButton.setForeground(Color.BLACK);
        homeButton.addActionListener(e -> {
            dispose();
            new StartPage();
        });
        loginTxt.setText("LOGIN");
        loginTxt.setFont(new Font("Consolas",Font.BOLD,35));
        usernameTxt.setText("Username");
        passwordTxt.setText("Password");

        loginTxt.setBounds(0,0,600,50);
        loginTxt.setHorizontalAlignment(0);
        usernameTxt.setBounds(0,80,600,30);
        usernameTxt.setHorizontalAlignment(0);
        usernameField.setBounds(25,130,540,30);
        passwordTxt.setBounds(0,200,600,30);
        passwordTxt.setHorizontalAlignment(0);
        passwordField.setBounds(25,250,540,30);
        loginButton.setBounds(225,300,150,40);
        homeButton.setBounds(10,0,100,30);

        add(loginTxt);
        add(usernameTxt);
        add(usernameField);
        add(passwordTxt);
        add(passwordField);
        add(loginButton);
        add(homeButton);
    }
}
