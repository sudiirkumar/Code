import javax.swing.*;
import java.awt.event.*;
import java.sql.*;
public class UserLogin implements ActionListener{
	 JFrame f;
	 JLabel usrname;
	 JLabel pswd;
	 JLabel wlcm;
	 JTextField usr_fld;
	 JPasswordField pswd_fld;
	 JButton log_btn,signup_btn;
	 public static String userName;
	 
	 public UserLogin() {
		  f=new JFrame("Login");
		  usrname=new JLabel("Username or Email : ");
		  pswd=new JLabel("Password : ");
		  wlcm=new JLabel("Welcome to our service.");
		  usr_fld=new JTextField();
		  pswd_fld=new JPasswordField();
		  log_btn=new JButton("Login");
		  signup_btn=new JButton("Sign Up");
		  
		  wlcm.setBounds(130, 2, 210, 30);
		  usrname.setBounds(40,40,150,30);
		  pswd.setBounds(40,100,100,30);
		  usr_fld.setBounds(160, 40, 200, 30);
		  pswd_fld.setBounds(160, 100, 200, 30);
		  log_btn.setBounds(80,150,80,30);
		  signup_btn.setBounds(200, 150, 80, 30);
		  
		  f.setVisible(true);
		  f.setBounds(300,10,400,250);
		  f.setLayout(null);
		  f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		  
		  f.add(wlcm);
		  f.add(usrname);
		  f.add(pswd);
		  f.add(usr_fld);
		  f.add(pswd_fld);
		  f.add(log_btn);
		  f.add(signup_btn);
		  
		  log_btn.addActionListener(this);
		  signup_btn.addActionListener(this);
	 }
	 public void actionPerformed(ActionEvent e) {
		  if(e.getSource()==log_btn) {
			   userName =usr_fld.getText();
			   String password = new String(pswd_fld.getPassword());
		  try{
			     Connection conn=(Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/db","root","root");
			     PreparedStatement st=(PreparedStatement)conn.prepareStatement("SELECT usr,password from student1 where (usr=? or email=?) and password=?");
			     st.setString(1, userName);
			     st.setString(2, userName);
			     st.setString(3, password);
			     ResultSet rs=st.executeQuery();
			     if(rs.next()){
			    	 f.dispose();
			    	 JOptionPane.showMessageDialog(log_btn, "You have successfully logged in");
			    	 new Welcome();
			     }
			     else
			    	 JOptionPane.showMessageDialog(log_btn, "Incorrect password or username.");
		    }
		    catch(Exception ex) {
		    	System.out.println(ex);
		    	JOptionPane.showMessageDialog(log_btn, "Server Error");
		    }
		 }
		 if(e.getSource()==signup_btn) {
			 f.dispose();
			 new SignUp();
		 }
	 }
	 public static void main(String[] args) throws Exception {
		 new UserLogin();
	 }
}