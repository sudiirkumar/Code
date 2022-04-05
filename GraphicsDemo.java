import java.awt.*;
import javax.swing.*;

public class GraphicsDemo extends Canvas{
    public void paint(Graphics g){
        //draw T
        g.drawLine(50,50,200,50);
        g.drawLine(125, 50, 125, 250);
        //draw I
        g.drawLine(250, 50, 400, 50);
        g.drawLine(250, 250, 400, 250);
        g.drawLine(325, 50, 325, 250);
        //draw M
        g.drawLine(450, 50, 450, 250);
        g.drawLine(600, 50, 600, 250);
        g.drawLine(450, 50, 525, 125);
        g.drawLine(600, 50, 525, 125);
        //draw E
        g.drawLine(650, 50, 650, 250);
        g.drawLine(650, 50, 750, 50);
        g.drawLine(650, 250, 750, 250);
        g.drawLine(650, 150, 725, 150);
    }
    public static void main(String[] args) {
        GraphicsDemo m = new GraphicsDemo();
        JFrame f = new JFrame();
        f.add(m);
        f.setSize(1200,400);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
