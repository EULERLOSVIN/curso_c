import java.awt.Color;
import java.awt.Font;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class InterfazProfesor extends JFrame {
    JPanel panel;
    JLabel titulo;
    JButton tomarLista;
    JButton ponerNotas;
    JButton cambiarNotas;
    JButton cerrarSesion;


    public InterfazProfesor() {

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

        tomarLista = new JButton("Llamar Asistencia");
        tomarLista.setBounds(50, 180, 190, 30);
        panel.add(tomarLista);

        ponerNotas = new JButton("Poner Notas");
        ponerNotas.setBounds(50, 240, 190, 30);
        panel.add(ponerNotas);

        cambiarNotas = new JButton("Cambiar Notas");
        cambiarNotas.setBounds(50, 300, 190, 30);
        panel.add(cambiarNotas);

        cerrarSesion = new JButton("Cerrar sesión");
        cerrarSesion.setBackground(new Color(175, 238, 238));
        cerrarSesion.setBounds(50, 370, 190, 30);
        panel.add(cerrarSesion);


    }

    public static void main(String[] args) {
        InterfazProfesor interfaz = new InterfazProfesor();
        interfaz.setVisible(true);
    }

}