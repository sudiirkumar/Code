import java.awt.event.*;
import javax.swing.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

public class SignUp implements ActionListener {
	 JFrame f;
	 JLabel usr,email,name,mob,pswd,cpswd;
	 JTextField usr_fld,email_fld,name_fld,mob_fld;
	 JPasswordField pswd_fld,cpswd_fld;
	 JButton btn;
	 
	 public SignUp(){
		  f=new JFrame("Sign Up");
		  usr=new JLabel("Username");
		  cpswd=new JLabel("Confirm Password");
		  pswd=new JLabel("Password");
		  email=new JLabel("Email");
		  name=new JLabel("Name");
		  mob=new JLabel("Mobile Number");
		  usr_fld=new JTextField();
		  pswd_fld=new JPasswordField();
		  cpswd_fld=new JPasswordField();
		  email_fld=new JTextField();
		  name_fld=new JTextField();
		  mob_fld=new JTextField();
		  btn=new JButton("Create Account");
		  
		  name.setBounds(40,40,100,30);
		  email.setBounds(40,100,100,30);
		  mob.setBounds(40, 160, 100, 30);
		  usr.setBounds(40,220,100,30);
		  pswd.setBounds(40,280,100,30);
		  cpswd.setBounds(40,340, 130, 30);
		  name_fld.setBounds(180, 40, 200, 30);
		  email_fld.setBounds(180, 100, 200, 30);
		  mob_fld.setBounds(180, 160, 200, 30);
		  usr_fld.setBounds(180,220,200,30);
		  pswd_fld.setBounds(180,280,200,30);
		  cpswd_fld.setBounds(180,340, 200, 30);
		  btn.setBounds(250,400,130,30);
		  
		  
		  f.setVisible(true);
		  f.setBounds(300,10,500,530);
		  f.setLayout(null);
		  f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		  
		  f.add(name);
		  f.add(email);
		  f.add(mob);
		  f.add(cpswd);
		  f.add(usr);
		  f.add(pswd);
		  f.add(name_fld);
		  f.add(email_fld);
		  f.add(cpswd_fld);
		  f.add(mob_fld);
		  f.add(usr_fld);
		  f.add(pswd_fld);
		  f.add(btn);
		  
		  btn.addActionListener(this);
	 }
	 public void actionPerformed(ActionEvent e) {
		  String Name =name_fld.getText();
		  String Email = email_fld.getText();
		  String Mob=mob_fld.getText();
		  String Usr=usr_fld.getText();
		  String Pswd=new String(pswd_fld.getPassword());
		  String CPswd=new String(cpswd_fld.getPassword());
		  if(e.getSource()==btn)
			   if(Pswd.equals(CPswd)){
				    try {
					     Connection connection = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/movie","root", "root");
					     PreparedStatement st = (PreparedStatement) connection.prepareStatement("INSERT INTO dominos(name,email,mob,usr,password)"+"VALUES(?,?,?,?,?);");
					     st.setString(1, Name);
					     st.setString(2, Email);
					     st.setString(3, Mob);
					     st.setString(4,Usr);
					     st.setString(5, CPswd);
					     int rs = st.executeUpdate();
					     
					     if(rs==1) {
						      JOptionPane.showMessageDialog(btn,"You have signed up successfully.\nYou can login now");
						      f.dispose();
						      new UserLogin();
					     }
				    }
				    catch(Exception ex) {
					     System.out.println(ex);
					     JOptionPane.showMessageDialog(btn, "Server Error");
				    }
			   }
			   else {
				   JOptionPane.showMessageDialog(btn, "Passwords doesn't match!");
			   }
	 }
	 public static void main(String[] args) throws Exception {
		 new SignUp();
	 }
}