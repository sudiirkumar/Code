import java.awt.Font;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import javax.swing.*;
public class Movie {
public static void Vishal_work2(){
JFrame frame3 = new JFrame("Planning");
frame3.setBounds(400, 140, 600, 400);
frame3.setResizable(false);
frame3.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
frame3.getContentPane().setLayout(null);
// frame3.getContentPane().setBackground(Color.gray);
JLabel lblNewLabel_1 = new JLabel("SELECT MOVIE");
lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
lblNewLabel_1.setBounds(81, 84, 178, 25);
frame3.getContentPane().add(lblNewLabel_1);
JComboBox<String> comboBox = new JComboBox<String>();
comboBox.setBounds(285, 84, 205, 25);
comboBox.addItem("DDLJ");
comboBox.addItem("KGF");
comboBox.addItem("SAHOO");
comboBox.addItem("RRR");
comboBox.addItem("MMS2");
comboBox.addItem("BHAAG KHESARI BHAAG");
comboBox.addItem("BHABHI SANG HOLI");
comboBox.addItem("BULLET PROOF LAHNGA");
comboBox.addItem("CHOLI M GOLI");
comboBox.addItem("RANGIN RAAT");
frame3.getContentPane().add(comboBox);
JLabel lblNewLabel_2 = new JLabel("SELECT THEATRE");
lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 14));
lblNewLabel_2.setBounds(81, 125, 178, 25);
frame3.getContentPane().add(lblNewLabel_2);
JComboBox<String> comboBox_2 = new JComboBox<String>();
comboBox_2.setBounds(285, 125, 205, 25);
comboBox_2.addItem("APR");
comboBox_2.addItem("VIOND CINEMA HALL");
comboBox_2.addItem("PARADISE");
comboBox_2.addItem("KIRAN CINEMA");
comboBox_2.addItem("RINKYA CINEMA");
comboBox_2.addItem("FALNWA CINEMA");
comboBox_2.addItem("ATULYA CINEMA HALL");
frame3.getContentPane().add(comboBox_2);
JLabel lblNewLabel_3 = new JLabel("SELECT DATE");
lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 14));
lblNewLabel_3.setBounds(81, 175, 178, 25);
frame3.getContentPane().add(lblNewLabel_3);
JComboBox<String> comboBox_3 = new JComboBox<String>();
comboBox_3.setBounds(285, 175, 205, 25);
comboBox_3.addItem("09-01-2023");
comboBox_3.addItem("10-01-2023");
comboBox_3.addItem("11-01-2023");
comboBox_3.addItem("12-01-2023");
comboBox_3.addItem("13-01-2023");
comboBox_3.addItem("14-01-2023");
comboBox_3.addItem("15-01-2023");
comboBox_3.addItem("16-01-2023");
comboBox_3.addItem("17-01-2023");
frame3.getContentPane().add(comboBox_3);
JLabel lblNewLabel_4 = new JLabel("SELECT TIME");
lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 14));
lblNewLabel_4.setBounds(81, 225, 178, 25);
frame3.getContentPane().add(lblNewLabel_4);
JComboBox<String> comboBox_4 = new JComboBox<String>();
comboBox_4.setBounds(285, 225, 205, 25);
comboBox_4.addItem("09:00 am");
comboBox_4.addItem("12:00 pm");
comboBox_4.addItem("02:00 pm");
comboBox_4.addItem("05:00 pm");
comboBox_4.addItem("09:00 pm");
comboBox_4.addItem("12:00 am");
frame3.getContentPane().add(comboBox_4);
JLabel lblNewLabel_5 = new JLabel("NO OF TICKETS");
lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 14));
lblNewLabel_5.setBounds(81, 270, 178, 25);
frame3.getContentPane().add(lblNewLabel_5);
  JTextField not = new JTextField("");
  not.setFont(new Font("Tahoma", Font.BOLD, 14));
not.setBounds(285, 270, 178, 25);
frame3.getContentPane().add(not); 
JButton btn = new JButton(" SUBMIT ");
btn.setFont(new Font("Tahoma", Font.BOLD, 14));
btn.setBounds(200, 320, 178, 25);
frame3.getContentPane().add(btn); 
not.addKeyListener(new KeyAdapter() {
        public void keyPressed(KeyEvent ke) {
         if (ke.getKeyChar() >= '0' && ke.getKeyChar() <= '9') {
           not.setEditable(true);
         } else {       
          JOptionPane.showMessageDialog(not,"Enter Only Integer");
          not.setText("");
         }
        }
      });
    frame3.setVisible(true);
    }
    public static void main(String[] args) {
    Vishal_work2();
    }
    }
    