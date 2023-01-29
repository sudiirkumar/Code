import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

//update student1 set email="email" 
public class Update implements ActionListener{
	JFrame f;
	JLabel usr,email,name,mob,pswd,cpswd;
	JTextField usr_fld,email_fld,name_fld,mob_fld;
	JPasswordField pswd_fld,cpswd_fld;
	JButton btn;
	
	public Update() {
		f=new JFrame("Update Details");
		usr=new JLabel("Username");
		cpswd=new JLabel("Confirm Password");
		pswd=new JLabel("Enter Password");
		email=new JLabel("Email");
		name=new JLabel("Name");
		mob=new JLabel("Mobile Number");
		usr_fld=new JTextField();
		pswd_fld=new JPasswordField();
		cpswd_fld=new JPasswordField();
		email_fld=new JTextField();
		name_fld=new JTextField();
		mob_fld=new JTextField();
		btn=new JButton("Update");
		
		name.setBounds(40,40,100,30);
		email.setBounds(40,100,100,30);
		mob.setBounds(40, 160, 100, 30);
		usr.setBounds(40,220,100,30);
		pswd.setBounds(40,280,100,30);
		cpswd.setBounds(40,340, 130, 30);
		name_fld.setBounds(250, 40, 200, 30);
		email_fld.setBounds(250, 100, 200, 30);
		mob_fld.setBounds(250, 160, 200, 30);
		usr_fld.setBounds(250,220,200,30);
		pswd_fld.setBounds(250,280,200,30);
		cpswd_fld.setBounds(250,340, 200, 30);
		btn.setBounds(250,400,130,30);
		
		f.setVisible(true);
		f.setBounds(300,10,500,580);
		f.setLayout(null);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		name_fld.setText(Welcome.name_entered);
		email_fld.setText(Welcome.email_entered);
		mob_fld.setText(Welcome.mob_entered);
		usr_fld.setText(Welcome.usr_entered);
		
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
					     Connection connection = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/db","root", "root");
					     PreparedStatement st = (PreparedStatement) connection.prepareStatement("UPDATE student1 SET name=?,email=?,mob=?,usr=?,password=? where name = ?;");
					     st.setString(6, Welcome.name_entered);
					     st.setString(1, Name);
					     st.setString(2, Email);
					     st.setString(3, Mob);
					     st.setString(4,Usr);
					     st.setString(5, CPswd);
					     int rs = st.executeUpdate();
					     
					     if(rs==1) {
						      JOptionPane.showMessageDialog(btn,"You have updated your details successfully.");
						      f.dispose();
						      new Welcome();
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
		 new Update();
	}
}