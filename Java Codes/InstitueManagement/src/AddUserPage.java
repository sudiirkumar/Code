import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AddUserPage extends JFrame {
    JLabel newUserTxt;
    JLabel nameTxt,mobTxt,usernameTxt,passwordTxt,adminTxt;
    JTextField nameField,mobField,usernameField,passwordField;
    JCheckBox adminCheckBox;
    JButton submitBtn;

    AddUserPage(){init();}
    private void init(){
        newUserTxt = new JLabel("Add new user");
        nameTxt = new JLabel("Name:");
        mobTxt = new JLabel("Mobile:");
        usernameTxt = new JLabel("Username:");
        passwordTxt = new JLabel("Password");
        adminTxt = new JLabel("Create admin?");
        adminCheckBox = new JCheckBox();
        nameField = new JTextField();
        mobField = new JTextField();
        usernameField = new JTextField();
        passwordField = new JTextField();
        submitBtn = new JButton();

        setTitle(Main.instituteName);
        setVisible(true);
        setResizable(false);
        setBounds(200,100,440,500);
        setLayout(null);

        submitBtn.setText("Submit");
        submitBtn.setFocusPainted(false);
        submitBtn.setForeground(Color.white);
        submitBtn.setBackground(Color.DARK_GRAY);
        submitBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                //TODO
            }
        });

        newUserTxt.setFont(new Font("Consolas",Font.BOLD,35));
        newUserTxt.setHorizontalAlignment(0);

        newUserTxt.setBounds(0,0,getWidth(),50);
        nameTxt.setBounds(20,100,150,30);
        usernameTxt.setBounds(20,150,150,30);
        mobTxt.setBounds(20,200,150,30);
        passwordTxt.setBounds(20,250,150,30);
        adminTxt.setBounds(20,300,150,30);
        nameField.setBounds(200,100,150,30);
        usernameField.setBounds(200,150,150,30);
        mobField.setBounds(200,200,150,30);
        passwordField.setBounds(200,250,150,30);
        adminCheckBox.setBounds(200,300,50,30);
        submitBtn.setBounds(300,400,80,30);

        add(newUserTxt);
        add(nameTxt);
        add(mobTxt);
        add(usernameTxt);
        add(passwordTxt);
        add(adminTxt);
        add(adminCheckBox);
        add(usernameField);
        add(passwordField);
        add(nameField);
        add(mobField);
        add(submitBtn);
    }
}
