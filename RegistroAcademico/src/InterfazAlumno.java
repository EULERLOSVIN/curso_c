import java.awt.Color;
import java.awt.Font;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;


//...................................................



//.....................................................
public class InterfazAlumno extends JFrame {

    JPanel panel;
    JLabel titulo;
    JButton registroButton;
    JComboBox<String> registroOptions;
    boolean opcionesVisibles = false;

    JButton horarioButton; // Declarar el botón para Horario de Clases
    JButton cursosMatriculadosButton; // Declarar el botón para Cursos Matriculados
    JButton calificacionesButton; // Declarar el botón para Calificaciones
    JButton ordenMeritoButton;
    JButton cerrarSesionButton;

    public InterfazAlumno() {
        setTitle("SISTEMA DE GESTIÓN ACADÉMICA");
        setSize(900, 800);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);


        panel = new JPanel();
        panel.setLayout(null);
        getContentPane().add(panel);

        titulo = new JLabel("CUENTA DE ALUMNO");
        titulo.setBounds(320, 10, 400, 50);
        titulo.setFont(new Font("Arial", Font.BOLD, 20));
        panel.add(titulo);

        registroButton = new JButton("▼    Registro");
        registroButton.setBounds(50, 120, 190, 30);
        registroButton.setBackground(new Color(0, 190, 190));
        registroButton.setBorderPainted(false);
        registroButton.setFocusPainted(false);
        registroButton.addActionListener(e -> {
            if (opcionesVisibles) {
                panel.remove(registroOptions);
                opcionesVisibles = false;
            } else {
                registroOptions = new JComboBox<String>();
                registroOptions.addItem("Matrícula");
                registroOptions.addItem("Aumento de cursos");
                registroOptions.addItem("Retiro de cursos");
                registroOptions.setBounds(50, 150, 190, 30);
                panel.add(registroOptions);
                opcionesVisibles = true;
            }
            panel.revalidate();
            panel.repaint();
        });
        panel.add(registroButton);

        horarioButton = new JButton("Horario de Clases");
        horarioButton.setBounds(50, 200, 190, 30);
        panel.add(horarioButton);

        cursosMatriculadosButton = new JButton("Cursos Matriculados");
        cursosMatriculadosButton.setBounds(50, 250, 190, 30);
        panel.add(cursosMatriculadosButton);

        calificacionesButton = new JButton("Calificaciones");
        calificacionesButton.setBounds(50, 300, 190, 30);
        panel.add(calificacionesButton);

        ordenMeritoButton = new JButton("Orden de Mérito");
        ordenMeritoButton.setBounds(50, 350, 190, 30);
        panel.add(ordenMeritoButton);

        cerrarSesionButton = new JButton("Cerrar sesión");
        cerrarSesionButton.setBackground(new Color(175, 238, 238));
        cerrarSesionButton.setBounds(50, 420, 190, 30);
        panel.add(cerrarSesionButton);
    }

    public static void main(String[] args) {
        InterfazAlumno interfaz = new InterfazAlumno();
        interfaz.setVisible(true);
    }
}