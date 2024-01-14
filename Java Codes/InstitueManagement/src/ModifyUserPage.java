import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class ModifyUserPage extends JFrame {
    private int id;
    private String password;
    JLabel newUserTxt;
    public static JLabel usernameInputTxt;
    JLabel nameTxt,mobTxt,usernameTxt,passwordTxt,adminTxt;
    JTextField nameField,mobField,usernameField,passwordField;
    public static JTextField usernameInputField;
    public static JCheckBox adminCheckBox;
    JButton submitBtn,deleteBtn;
    public static JButton searchBtn;

    ModifyUserPage(){
        init();
    }
    private void init(){
        newUserTxt = new JLabel("Modify user");
        usernameInputTxt = new JLabel("Enter username:");
        usernameInputField = new JTextField();
        searchBtn = new JButton();
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
        deleteBtn = new JButton();

        usernameInputTxt.setVisible(true);
        usernameInputField.setVisible(true);
        searchBtn.setVisible(true);

        setTitle(Main.instituteName);
        setVisible(true);
        setResizable(false);
        setBounds(200,100,440,500);
        setLayout(null);

        submitBtn.setText("Submit");
        submitBtn.setFocusPainted(false);
        submitBtn.setForeground(Color.white);
        submitBtn.setBackground(Color.DARK_GRAY);
        searchBtn.setText("Search");
        searchBtn.setFocusPainted(false);
        searchBtn.setForeground(Color.white);
        searchBtn.setBackground(Color.darkGray);
        deleteBtn.setText("Delete");
        deleteBtn.setFocusPainted(false);
        deleteBtn.setForeground(Color.white);
        deleteBtn.setBackground(Color.red);

        submitBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try{
                    Connection conn=(Connection) DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                    PreparedStatement st=(PreparedStatement)conn.prepareStatement("UPDATE users SET name=?,username=?,password=?,mob=?,is_admin=? where id=?");
                    st.setString(1, nameField.getText());
                    st.setString(2,usernameField.getText());
                    if(!passwordField.getText().isEmpty())
                        st.setString(3,passwordField.getText());
                    else
                        st.setString(3,password);
                    st.setString(4,mobField.getText());
                    st.setBoolean(5,adminCheckBox.isSelected());
                    st.setInt(6,id);
                    int rs=st.executeUpdate();
                    if(rs==1){
                        dispose();
                        JOptionPane.showMessageDialog(submitBtn, "Account updated");
                    }
                    else
                        JOptionPane.showMessageDialog(submitBtn, "Error occured");
                }
                catch(Exception ex) {
                    System.out.println(ex);
                    JOptionPane.showMessageDialog(submitBtn, "Server Error");
                }
            }
        });
        searchBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try{
                    Connection conn=(Connection) DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                    PreparedStatement st=(PreparedStatement)conn.prepareStatement("Select * from users where username=?");
                    st.setString(1,usernameInputField.getText());
                    ResultSet rs=st.executeQuery();
                    if(rs.next()){
                        nameField.setText(rs.getString("name"));
                        usernameField.setText(rs.getString("username"));
                        mobField.setText(rs.getString("mob"));
                        adminCheckBox.setSelected(rs.getBoolean("is_admin"));
                        password = rs.getString("password");
                        id = rs.getInt("id");
                    }
                    else
                        JOptionPane.showMessageDialog(searchBtn, "User not found");
                }
                catch(Exception ex) {
                    System.out.println(ex);
                    JOptionPane.showMessageDialog(searchBtn, "Server Error");
                }
            }
        });
        deleteBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try{
                    Connection conn=(Connection) DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                    PreparedStatement st=(PreparedStatement)conn.prepareStatement("DELETE from users where id=?");
                    st.setInt(1,id);
                    int rs=st.executeUpdate();
                    if(rs==1){
                        dispose();
                        JOptionPane.showMessageDialog(deleteBtn,"User deleted");
                    }
                    else
                        JOptionPane.showMessageDialog(deleteBtn, "Server Error");
                }
                catch(Exception ex) {
                    System.out.println(ex);
                    JOptionPane.showMessageDialog(deleteBtn, "Server Error");
                }
            }
        });

        newUserTxt.setFont(new Font("Consolas",Font.BOLD,35));
        newUserTxt.setHorizontalAlignment(0);

        newUserTxt.setBounds(0,0,getWidth(),50);
        usernameInputTxt.setBounds(20,100,150,30);
        usernameInputField.setBounds(200,100,100,30);
        searchBtn.setBounds(320,100,80,30);
        nameTxt.setBounds(20,150,150,30);
        usernameTxt.setBounds(20,200,150,30);
        mobTxt.setBounds(20,250,150,30);
        passwordTxt.setBounds(20,300,150,30);
        adminTxt.setBounds(20,350,150,30);
        nameField.setBounds(200,150,150,30);
        usernameField.setBounds(200,200,150,30);
        mobField.setBounds(200,250,150,30);
        passwordField.setBounds(200,300,150,30);
        adminCheckBox.setBounds(200,350,50,30);
        submitBtn.setBounds(100,400,100,40);
        deleteBtn.setBounds(250,400,100,40);


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
        add(usernameInputField);
        add(usernameInputTxt);
        add(searchBtn);
        add(deleteBtn);
    }
}
