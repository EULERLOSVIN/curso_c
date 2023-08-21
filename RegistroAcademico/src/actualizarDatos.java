import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class actualizarDatos extends JFrame {

    // Constructor de la clase ActualizarDatos
    public actualizarDatos() {
        // Configuración básica de la ventana
        setTitle("Lista de Estudiantes");
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        setLocationRelativeTo(null);

        // Crear el modelo de tabla utilizando la función crearModeloTabla
        DefaultTableModel modelo = crearModeloTabla();

        // Crear la tabla y agregarla a un JScrollPane
        JTable tabla = new JTable(modelo);
        JScrollPane panelDesplazamiento = new JScrollPane(tabla);
        add(panelDesplazamiento);

        // Ajustar el tamaño de la ventana según el contenido y hacerla visible
        pack();
        setVisible(true);
    }

    // Función para crear el modelo de tabla
    private DefaultTableModel crearModeloTabla() {
        // Definir los encabezados de las columnas
        String[] encabezadosColumna = {"CÓDIGO", "NOMBRES", "ASISTENCIA", "FACULTAD"};

        // Crear un modelo de tabla vacío con los encabezados
        DefaultTableModel modelo = new DefaultTableModel(encabezadosColumna, 0);

        // Ruta del archivo CSV
        String rutaArchivo = "C:\\Users\\euler\\OneDrive\\Documentos\\datosProyecto.csv";

        try (BufferedReader br = new BufferedReader(new FileReader(rutaArchivo))) {
            String linea;
            // Leer cada línea del archivo CSV
            while ((linea = br.readLine()) != null) {
                // Dividir la línea en elementos usando la coma como separador
                String[] fila = linea.split(",");
                // Agregar la fila al modelo de tabla
                modelo.addRow(fila);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        return modelo; // Devolver el modelo de tabla con los datos
    }

    // Método principal
    public static void main(String[] args) {
        // Ejecutar la creación y visualización de la ventana en el hilo de eventos de Swing
        SwingUtilities.invokeLater(() -> {
            new actualizarDatos().setVisible(true); // Crear una instancia de la clase ActualizarDatos y hacerla visible
        });
    }
}