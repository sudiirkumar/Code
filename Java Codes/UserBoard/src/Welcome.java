import java.sql.*;
import java.awt.event.*;
import javax.swing.*;

public class Welcome implements ActionListener{
	 JFrame f;
	 JLabel n1,n2,e1,e2,m1,m2,u1,u2,p1,p2;
	 JButton del_btn,update_btn,logout_btn;
	 public static String name_entered;
	 public static String email_entered;
	 public static String mob_entered;
	 public static String usr_entered;
	 public static String pass_entered;
	 
	 public Welcome() throws Exception{
		  f=new JFrame("Welcome");
		  n1=new JLabel("Name : ");
		  e1=new JLabel("Email : ");
		  m1=new JLabel("Mobile number : ");
		  u1=new JLabel("User Name : ");
		  p1=new JLabel("Password : ");
		  
		  n2=new JLabel("N/A");
		  e2=new JLabel("N/A");
		  m2=new JLabel("N/A");
		  u2=new JLabel("N/A");
		  p2=new JLabel("N/A");
		  del_btn=new JButton("Delete Account");
		  update_btn = new JButton("Update details");
		  logout_btn = new JButton("Logout");
		  
		  f.setVisible(true);
		  f.setBounds(300,10,440,440);
		  f.setLayout(null);
		  f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		  
		  n1.setBounds(10, 10, 100, 30);
		  n2.setBounds(210, 10, 200, 30);
		  e1.setBounds(10, 70, 200, 30);
		  e2.setBounds(210, 70, 200, 30);
		  m1.setBounds(10, 130, 200, 30);
		  m2.setBounds(210, 130, 200, 30);
		  u1.setBounds(10, 190, 200, 30);
		  u2.setBounds(210, 190, 200, 30);
		  p1.setBounds(10, 250, 200, 30);
		  p2.setBounds(210, 250, 200, 30);
		  del_btn.setBounds(50,310,150,30);
		  update_btn.setBounds(220, 310, 150, 30);
		  logout_btn.setBounds(160, 350, 100, 30);
		  
		  f.add(n1);
		  f.add(n2);
		  f.add(e1);
		  f.add(e2);
		  f.add(m1);
		  f.add(m2);
		  f.add(u1);
		  f.add(u2);
		  f.add(p1);
		  f.add(p2);
		  f.add(del_btn);
		  f.add(update_btn);
		  f.add(logout_btn);
		  
		  del_btn.addActionListener(this);
		  update_btn.addActionListener(this);
		  logout_btn.addActionListener(this);
		  
		  Connection conn=(Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/db","root","root");
		  PreparedStatement st=(PreparedStatement)conn.prepareStatement("SELECT * FROM student1 where usr=? or email=?");
		   
		  st.setString(1,UserLogin.userName );
		  st.setString(2,UserLogin.userName);
		  ResultSet rs=st.executeQuery();
		   
		  if(rs.next()) {
			  name_entered = rs.getString("name");
			  n2.setText(name_entered);
			  email_entered = rs.getString("email");
			  e2.setText(email_entered);
			  mob_entered = rs.getString("mob");
			  m2.setText(mob_entered);
			  usr_entered = rs.getString("usr");
			  u2.setText(usr_entered);
			  pass_entered = rs.getString("password");
			  p2.setText(pass_entered);
		  }
	 }
	 public void actionPerformed(ActionEvent e)  {
		  if(e.getSource()==del_btn) {
			   try{
				    int rs=0;
				    Connection conn=(Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/db","root","root");
				    int a=JOptionPane.showConfirmDialog(f,"Are you sure?");  
				    if(a==JOptionPane.YES_OPTION){  
					     PreparedStatement st=(PreparedStatement)conn.prepareStatement("DELETE FROM student1 where usr=?");
					     st.setString(1,UserLogin.userName );
					     rs=st.executeUpdate(); 
				    }  
				    
				    if(rs==1) {
					     f.dispose();
					     JOptionPane.showMessageDialog(del_btn, "Account deleted successfully.");
				    }
			   }
			   catch(Exception ex) {
				    System.out.println(ex);
				    JOptionPane.showMessageDialog(del_btn, "Server Error");
			   }
		  }
		  if(e.getSource()==update_btn) {
			  f.dispose();
			  new Update();
		  }
		  if(e.getSource()==logout_btn) {
			  f.dispose();
			  new UserLogin();
		  }
	 }
	 public static void main(String[] args) throws Exception {
	  new Welcome();
	 }
}