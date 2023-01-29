import java.awt.Color;

import javax.swing.*;

public class Login {
	JPanel logPanel;
	JLabel usrtxt,pswdtxt,logintxt;
	JPasswordField pswdIn;
	JTextField usrIn;
	JButton logBtn;
	JButton signupBtn;
	JButton frgtBtn;
	public Login() {
		logPanel = new JPanel();
		logintxt = new JLabel("Login");
		usrtxt = new JLabel("Username");
		pswdtxt = new JLabel("Password");
		pswdIn = new JPasswordField();
		usrIn = new JTextField();
		logBtn = new JButton("Login");
		signupBtn = new JButton("Register now");
		frgtBtn = new JButton("Forgot password?");
		
		frgtBtn.setBorderPainted(false);
		frgtBtn.setOpaque(false);
		frgtBtn.setBackground(Color.YELLOW);
		
		logintxt.setBounds(10, 10, 60, 20);
		usrtxt.setBounds(50,50, 60, 20);
		usrIn.setBounds(50,80,200,30);
		pswdtxt.setBounds(50, 130, 60, 20);
		pswdIn.setBounds(50, 160, 200, 30);
		frgtBtn.setBounds(120, 200, 150, 20);
		logBtn.setBounds(50, 260, 200, 25);
		signupBtn.setBounds(50,320,200,25);
		
		logPanel.setBackground(Color.YELLOW);
		logPanel.setLayout(null);
		
		logPanel.add(usrtxt);
		logPanel.add(logintxt);
		logPanel.add(usrIn);
		logPanel.add(pswdtxt);
		logPanel.add(pswdIn);
		logPanel.add(frgtBtn);
		logPanel.add(logBtn);
		logPanel.add(signupBtn);
	}
	public static void main(String a[]) {
		new Login();
	}
}
