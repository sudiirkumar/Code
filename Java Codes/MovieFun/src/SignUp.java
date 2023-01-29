import java.awt.Color;

import javax.swing.*;

public class SignUp {
	JPanel logPanel;
	JLabel registertxt,usrtxt,pswdtxt,cpswdtxt,emailtxt;
	JPasswordField pswdIn,cpswdIn;
	JTextField usrIn,emailIn;
	JButton logBtn;
	JButton signupBtn;
	public SignUp() {
		logPanel = new JPanel();
		registertxt = new JLabel("Register");
		usrtxt = new JLabel("Username");
		pswdtxt = new JLabel("Password");
		cpswdtxt = new JLabel("Confirm password");
		emailtxt = new JLabel("Email");
		pswdIn = new JPasswordField();
		cpswdIn = new JPasswordField();
		emailIn = new JTextField();
		usrIn = new JTextField();
		logBtn = new JButton("Back to login");
		signupBtn = new JButton("Register now");
		
		registertxt.setBounds(10, 10, 60, 20);
		usrtxt.setBounds(50,50, 200, 20);
		usrIn.setBounds(50,80,200,30);
		pswdtxt.setBounds(50, 120, 200, 20);
		pswdIn.setBounds(50, 150, 200, 30);
		cpswdtxt.setBounds(50,190,200,20);
		cpswdIn.setBounds(50,220,200,30);
		emailtxt.setBounds(50,260,200,20);
		emailIn.setBounds(50,290,200,30);
		logBtn.setBounds(50, 360, 200, 25);
		signupBtn.setBounds(50,420,200,25);
		
		logPanel.setBackground(Color.YELLOW);
		logPanel.setLayout(null);
		
		logPanel.add(usrtxt);
		logPanel.add(registertxt);
		logPanel.add(usrIn);
		logPanel.add(pswdtxt);
		logPanel.add(pswdIn);
		logPanel.add(logBtn);
		logPanel.add(signupBtn);
		logPanel.add(cpswdIn);
		logPanel.add(cpswdtxt);
		logPanel.add(emailIn);
		logPanel.add(emailtxt);
	}
	public static void main(String a[]) {
		new SignUp();
	}
}
