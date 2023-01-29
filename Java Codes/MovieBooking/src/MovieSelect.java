import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class MovieSelect implements ActionListener{
	JFrame frame;
	JLabel title,mv_name1,mv_name2,dir_label1,dir_label2,act_label1,act_label2,date_label1,date_label2;
	JButton mv_sel1,mv_sel2;
	
	public MovieSelect() {
		frame = new JFrame("Movie Select");
		title = new JLabel("Select Movie:");
		mv_name1  = new JLabel("ABCD4");
		mv_name2 = new JLabel("3 idiots");
		dir_label1 = new JLabel("Director:");
		dir_label2 = new JLabel("Director:");
		act_label1 = new JLabel("Actor: ");
		act_label2 = new JLabel("Actor: ");
		date_label1 = new JLabel("Date of release: ");
		date_label2 = new JLabel("Date of release: ");
		mv_sel1 = new JButton("Select");
		mv_sel2 = new JButton("Select");
		
		title.setBounds(20, 10, 200, 30);
		mv_name1.setBounds(20,90,200,30);
		dir_label1.setBounds(30, 150, 100, 30);
		act_label1.setBounds(30, 180, 100, 30);
		date_label1.setBounds(30, 210, 100, 30);
		mv_sel1.setBounds(300, 210, 80, 30);
		mv_name2.setBounds(20,260,200,30);
		dir_label2.setBounds(30, 310, 100, 30);
		act_label2.setBounds(30, 340, 100, 30);
		date_label2.setBounds(30, 370, 100, 30);
		mv_sel2.setBounds(300, 370, 80, 30);
		
		frame.setVisible(true);
		frame.setBounds(300,10,450,600);
		frame.setLayout(null);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		frame.add(title);
		frame.add(mv_name1);
		frame.add(mv_name2);
		frame.add(dir_label1);
		frame.add(dir_label2);
		frame.add(act_label1);
		frame.add(act_label2);
		frame.add(date_label1);
		frame.add(date_label2);
		frame.add(mv_sel1);
		frame.add(mv_sel2);
		
		mv_sel1.addActionListener(this);
		mv_sel2.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==mv_sel1) {
			
		}
		if(e.getSource()==mv_sel2) {
			
		}
	}
	public static void main(String[] args) {
		new MovieSelect();
	}
}