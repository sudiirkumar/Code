
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;

public class TextAreaCount implements ActionListener {
    JLabel l1,l2,l3,l4;
    JTextArea a;
    JButton b;
    TextAreaCount(){
        JFrame f=new JFrame();
        l1=new JLabel();
        l1.setBounds(50,25,100,30);
        l2=new JLabel();
        l2.setBounds(160,25,100,30);
        a=new JTextArea();
        a.setBounds(20,75,250,200);
        b=new JButton("Count Words");
        b.setBounds(100,300,120,30);
        b.addActionListener(this);
        l3=new JLabel();
        l3.setBounds(50,40,100,30);
        l4=new JLabel();
        l4.setBounds(160,40,100,30);
        f.add(l3);
        f.add(l4);
        f.add(l1);
        f.add(l2);f.add(a);
        f.add(b);
        f.setSize(450,450);
        f.setLayout(null);
        f.setVisible(true);
    }
        public void actionPerformed (ActionEvent e) {
            try {
                String text = a.getText();
                int c = 0, b = 0;
                String words[] = text.split("\\s");
                for (int i = 0; i < text.length(); i++) {
                    if (text.charAt(i) == 'a'||text.charAt(i) == 'e'|| text.charAt(i) == 'i'  ||text.charAt(i) == 'o' || text.charAt(i) == 'u') {
                        c++;
                    } else {
                        b++;
                    }

                }
                l4.setText("consonant:" + b);
                l3.setText("vowels:" + c);
                l1.setText("words:" + words.length);
                l2.setText("characters:" + text.length());
            } catch (ArithmeticException a) {
                System.out.println("input output exception e" + a);
            }
        }
    public static void main(String[] args){
        new TextAreaCount();
    }
}