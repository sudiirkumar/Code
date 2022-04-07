import javax.swing.*;
import java.awt.*;

public class SignBoard extends Canvas{
    public void paint(Graphics g){
        g.setColor(Color.GREEN);
        g.fillRect(0, 0, 600, 450); 
        g.setColor(Color.white);
        g.fillOval(130, 15, 340, 340);
        g.setColor(Color.RED);
        g.fillOval(150, 35, 300, 300);
        g.setColor(Color.WHITE);
        g.fillRect(200, 150, 200, 70);
    }
    public static void main(String[] args) {
        SignBoard s = new SignBoard();
        JFrame f = new JFrame();
        f.add(s);
        f.setSize(600,400);
        f.setResizable(false);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}