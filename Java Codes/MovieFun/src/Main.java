import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class Main implements ActionListener{
	JFrame main;
	Login log;
	SignUp signup;
	public Main() {
		main = new JFrame("Welcome");
		log = new Login();
		signup = new SignUp();
		
		signup.logPanel.setBounds(100,60,300,500);
		signup.logPanel.setVisible(false);
		signup.logBtn.addActionListener(this);
		
		log.logPanel.setBounds(100,60,300,500);
		log.signupBtn.addActionListener(this);
		
		main.setVisible(true);
		main.setBounds(0,0,500,600);
		main.setBackground(Color.BLACK);
		main.setLayout(null);
		main.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		main.add(log.logPanel);
		main.add(signup.logPanel);
		
	}
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==log.signupBtn) {
			log.logPanel.setVisible(false);
			signup.logPanel.setVisible(true);
		}
		if(e.getSource()==signup.logBtn) {
			signup.logPanel.setVisible(false);
			log.logPanel.setVisible(true);
		}
		if(e.getSource()==log.logBtn) {
			//login
		}
		if(e.getSource()==signup.signupBtn) {
			//signup
		}
	}
	public static void main(String args[]) {
		new Main();
	}
}
