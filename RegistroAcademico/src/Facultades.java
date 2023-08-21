
import java.awt.Font;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class Facultades extends JFrame {

    JPanel panel;
    JLabel titulo;
    JButton Facultad1;
    JButton Facultad2;
    JButton Facultad3;
    JButton Facultad4;
    JButton Facultad5;
    JButton Facultad6;
    JButton Facultad7;
    JButton Facultad8;
    JButton Facultad9;
    JButton Facultad10;
    JButton Facultad11;
    JButton Facultad12;


    public Facultades() {

        setTitle("VENTANA DE ADMINISTRADOR");
        setSize(800, 700);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        panel = new JPanel();
        panel.setLayout(null);
        getContentPane().add(panel);

        titulo = new JLabel("CUENTA DE PROFESOR");
        titulo.setBounds(320, 10, 400, 50);
        titulo.setFont(new Font("Arial", Font.BOLD, 20));
        panel.add(titulo);

        Facultad1 = new JButton("AGRONOMIA");
        Facultad1.setBounds(50, 150, 240, 30);
        panel.add(Facultad1);

        Facultad2 = new JButton("ZOOTECNIA");
        Facultad2.setBounds(50, 210, 240, 30);
        panel.add(Facultad2);

        Facultad3 = new JButton("INGENIERÍA EN INDUSTRIAS");
        Facultad3.setBounds(50, 270, 240, 30);
        panel.add(Facultad3);

        Facultad4= new JButton("INGENIERIA FORESTAL");
        Facultad4.setBounds(50, 330, 240, 30);
        panel.add(Facultad4);

        Facultad5 = new JButton("INGENIERIA EN CONSERVACION DE SUELOS Y AGUAS");
        Facultad5.setBounds(50, 390, 240, 30);
        panel.add(Facultad5);

        Facultad6 = new JButton("ADMINISTRACION");
        Facultad6.setBounds(50, 450, 240, 30);
        panel.add(Facultad6);

        Facultad7 = new JButton("CONTABILIDAD");
        Facultad7.setBounds(470, 150, 240, 30);
        panel.add(Facultad7);

        Facultad8 = new JButton("ECONOMIA");
        Facultad8.setBounds(470, 210, 240, 30);
        panel.add(Facultad8);

        Facultad9 = new JButton("INGENIERIA EN INFORMATICA Y SISTEMAS");
        Facultad9.setBounds(470, 270, 240, 30);
        panel.add(Facultad9);

        Facultad10 = new JButton("INGENIERIA AMBIENTAL");
        Facultad10.setBounds(470, 330, 240, 30);
        panel.add(Facultad10);

        Facultad11 = new JButton("INGENIERIA EN RECURSOS NATURALES");
        Facultad11.setBounds(470, 390, 240, 30);
        panel.add(Facultad11);

        Facultad12 = new JButton("INGENIERIA MECANICA ELECTRICA");
        Facultad12.setBounds(470, 450, 240, 30);
        panel.add(Facultad12);




    }

    public static void main(String[] args) {
        Facultades interfaz = new Facultades();
        interfaz.setVisible(true);
    }

}
