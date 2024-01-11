import javax.swing.*;
import java.awt.*;

public class LoginPage extends JFrame {
    JButton loginButton;
    JLabel loginTxt,usernameTxt,passwordTxt,forgotTxt;
    JTextField usernameField;
    JPasswordField passwordField;
    LoginPage(){
        init();
    }
    private void init(){
        loginButton = new JButton();
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

        loginButton.setText("Login");
        loginButton.setFocusPainted(false);
        loginButton.setBackground(Color.DARK_GRAY);
        loginButton.setForeground(Color.white);
        loginButton.addActionListener(e -> dispose());
        loginTxt.setText("LOGIN");
        loginTxt.setFont(new Font("Consolas",Font.BOLD,35));
        usernameTxt.setText("Username");
        passwordTxt.setText("Password");

        loginTxt.setBounds(0,0,600,50);
        loginTxt.setHorizontalAlignment(0);
        usernameTxt.setBounds(0,100,600,30);
        usernameTxt.setHorizontalAlignment(0);
        usernameField.setBounds(30,150,570,50);
        passwordTxt.setBounds(0,220,600,30);
        passwordTxt.setHorizontalAlignment(0);
        passwordField.setBounds(30,270,570,50);
        loginButton.setBounds(225,200,150,40);

        add(loginTxt);
        add(usernameTxt);
        add(usernameField);
        add(passwordTxt);
        add(passwordField);
        add(loginButton);
    }
}
