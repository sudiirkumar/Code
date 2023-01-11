import javax.swing.*;
import java.awt.Graphics;

public class TicTacToe extends JFrame{
    JFrame frame = new JFrame("Tick Tack Toe Game");
    JLabel in[][] = new JLabel[3][3];
    JPanel panel = new JPanel(){@Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            g.drawLine(90,10,90,250);
            g.drawLine(200,10,200,250);
            g.drawLine(10,90,270,90);
            g.drawLine(10,180,270,180);
        }};

    public TicTacToe(){
        frame.setLayout(null);
        frame.setResizable(false);
        frame.setSize(300,300);
        frame.setVisible(true);
        frame.add(panel);
        frame.setDefaultCloseOperation(EXIT_ON_CLOSE);

        panel.setSize(300,300);
        panel.setVisible(true);

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                in[i][j].setBounds(i*100, j*100, 50,50);
                in[i][j].setText("X");
                panel.add(in[i][j]);
            }
        }
    }
    
    public static void main(String[] args) {
        new TicTacToe();
    }
}