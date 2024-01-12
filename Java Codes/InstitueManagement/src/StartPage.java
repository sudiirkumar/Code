import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class StartPage extends JFrame {
    JLabel instituteNameTxt;
    JButton LoginBtn;
    JButton exitBtn;

    StartPage(){
        init();
    }
    private void modifyButton(JButton btn, String text, int x, int y, int width, int height){
        btn.setText(text);
        btn.setBounds(x,y,width,height);
        btn.setFocusPainted(false);
        btn.setForeground(Color.WHITE);
        btn.setBackground(Color.DARK_GRAY);
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

        modifyButton(LoginBtn,"Login",200,100,200,50);
        modifyButton(exitBtn,"Exit",225,200,150,40);
        exitBtn.setBackground(Color.RED);
        instituteNameTxt.setFont(new Font("Consolas", Font.BOLD,35));

        LoginBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dispose();
                new LoginPage();
            }
        });
        exitBtn.addActionListener(e -> System.exit(0));

        instituteNameTxt.setBounds(0,0,600,50);
        instituteNameTxt.setHorizontalAlignment(0);

        add(instituteNameTxt);
        add(LoginBtn);
        add(exitBtn);
    }
}
