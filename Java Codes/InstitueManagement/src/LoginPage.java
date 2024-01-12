import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LoginPage extends JFrame {
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
        loginButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dispose();
                new AdminWelcomePage();
            }
        });
        homeButton.setText("Home");
        homeButton.setFocusPainted(false);
        homeButton.setOpaque(false);
        homeButton.setBorderPainted(false);
        homeButton.setBackground(Color.white);
        homeButton.setForeground(Color.BLACK);
        homeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dispose();
                new StartPage();
            }
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
