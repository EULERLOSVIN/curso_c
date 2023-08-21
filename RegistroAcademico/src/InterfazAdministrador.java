import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

//para agregar la tabla 
import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class InterfazAdministrador extends JFrame implements ActionListener {
    JPanel panel;
    JLabel titulo;
    JButton agregarEstudiante;
    JButton listaEstudiantes;
    JButton actualizarDatos;
    JButton eliminarDatos;
    JButton agregarAdministrador;
    JButton cerrarSesionButton;
    JButton retrocederButton;
    JButton avanzarButton;

    public InterfazAdministrador() {
        setTitle("VENTANA DE ADMINISTRADOR");
        setSize(800, 700);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        panel = new JPanel();
        panel.setLayout(null);
        getContentPane().add(panel);

        titulo = new JLabel("CUENTA DE ADMINISTRADOR");
        titulo.setBounds(270, 10, 400, 50);
        titulo.setFont(new Font("Arial", Font.BOLD, 20));
        panel.add(titulo);

        agregarEstudiante = new JButton("Agregar Estudiantes");
        agregarEstudiante.setBounds(50, 200, 190, 30);
        agregarEstudiante.addActionListener(this);
        panel.add(agregarEstudiante);

        listaEstudiantes = new JButton("Lista de Estudiantes");
        listaEstudiantes.setBounds(50, 250, 190, 30);
        listaEstudiantes.addActionListener(this);
        panel.add(listaEstudiantes);

        actualizarDatos = new JButton("Actualizar Datos");
        actualizarDatos.setBounds(50, 300, 190, 30);
        panel.add(actualizarDatos);

        eliminarDatos = new JButton("Eliminar Datos");
        eliminarDatos.setBounds(50, 350, 190, 30);
        panel.add(eliminarDatos);

        agregarAdministrador = new JButton("Agregar Administrador");
        agregarAdministrador.setBounds(50, 400, 190, 30);
        panel.add(agregarAdministrador);

        cerrarSesionButton = new JButton("Cerrar sesión");
        cerrarSesionButton.setBackground(new Color(175, 238, 238));
        cerrarSesionButton.setBounds(50, 470, 190, 30);
        panel.add(cerrarSesionButton);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == agregarEstudiante) {
            Facultades f = new Facultades();
            f.setVisible(true);
            this.dispose();

        } 

        else if (e.getSource() == listaEstudiantes) {
            mostrarTablaEstudiantes();
        }

        if(e.getSource() == actualizarDatos) {

        }

        // ... (otras acciones)
    }

    private void mostrarTablaEstudiantes() {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("Lista de Estudiantes");
            frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

            DefaultTableModel modelo = leyendoDatos.crearModeloTabla(); // Llamamos a la función estática de leyendoDatos

            JTable tabla = new JTable(modelo);
            JScrollPane panelDesplazamiento = new JScrollPane(tabla);
            frame.add(panelDesplazamiento);

            frame.pack();
            frame.setLocationRelativeTo(null);
            frame.setVisible(true);
        });
    }

    public static void main(String[] args) {
        InterfazAdministrador interfaz = new InterfazAdministrador();
        interfaz.setVisible(true);
    }
}

class leyendoDatos {
    public static DefaultTableModel crearModeloTabla() {
        String[] encabezadosColumna = {"CÓDIGO", "NOMBRES", "ASISTENCIA", "FACULTAD"};
        DefaultTableModel modelo = new DefaultTableModel(encabezadosColumna, 0);

        String rutaArchivo = "C:\\Users\\euler\\OneDrive\\Documentos\\datosProyecto.csv";

        try (BufferedReader br = new BufferedReader(new FileReader(rutaArchivo))) {
            String linea;
            while ((linea = br.readLine()) != null) {
                String[] fila = linea.split(",");
                modelo.addRow(fila);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        return modelo;
    }
}