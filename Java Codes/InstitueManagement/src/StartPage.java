import javax.swing.*;
import java.awt.*;

public class StartPage extends JFrame {
    JLabel instituteNameTxt;
    JButton LoginBtn;
    JButton exitBtn;

    StartPage(){
        init();
    }
    private void init(){
        instituteNameTxt = new JLabel(Main.instituteName);
        LoginBtn = new JButton();
        exitBtn = new JButton();

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
        setBounds(200,100,600,400);
        setLayout(null);
        setResizable(false);
        setTitle(Main.instituteName);

        LoginBtn.setText("Login");
        exitBtn.setText("Exit");
        LoginBtn.setFocusPainted(false);
        LoginBtn.setBackground(Color.DARK_GRAY);
        LoginBtn.setForeground(Color.WHITE);
        exitBtn.setFocusPainted(false);
        exitBtn.setBackground(Color.RED);
        exitBtn.setForeground(Color.WHITE);
        instituteNameTxt.setFont(new Font("Consolas", Font.BOLD,35));

        LoginBtn.addActionListener(e -> new LoginPage());
        exitBtn.addActionListener(e -> dispose());

        instituteNameTxt.setBounds(0,0,600,50);
        instituteNameTxt.setHorizontalAlignment(0);
        exitBtn.setBounds(225,200,150,40);
        LoginBtn.setBounds(200, 100, 200,50);

        add(instituteNameTxt);
        add(LoginBtn);
        add(exitBtn);
    }
}
