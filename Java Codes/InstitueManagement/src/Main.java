import javax.swing.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class Main {
    public static String instituteName = "Codephile Institute";
    public static int noOfUsers;
    public static int noOfStudents;

    public static void main(String[] args) {
        new StartPage();
    }
}