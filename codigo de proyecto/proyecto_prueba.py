import tkinter as tk
import csv
from evaluar import evaluar_contrasena  # Importa la función evaluar_contrasena desde evaluar.py

# Función para cargar datos desde un archivo CSV
def cargar_datos_csv(archivo_csv):
    datos = []
    with open(archivo_csv, 'r') as file:
        csv_reader = csv.reader(file)
        for row in csv_reader:
            datos.append(row)
    return datos

# Función para iniciar sesión
def iniciar_sesion():
    usuario = entry_usuario.get()
    contraseña = entry_contraseña.get()
    for registro in datos_csv:
        if registro[3] == usuario and registro[4] == contraseña:
            texto_informacion.insert(tk.END, "Inicio de sesión exitoso.\n\n")
            return
    texto_informacion.insert(tk.END, "Inicio de sesión fallido. Usuario o contraseña incorrectos.\n\n")

# Función para mostrar/ocultar la contraseña
def mostrar_contraseña():
    if var_mostrar_contraseña.get():
        entry_contraseña["show"] = ""
    else:
        entry_contraseña["show"] = "*"

# Función para evaluar la contraseña al hacer clic en el botón "EVALUACIÓN"
def evaluacion_contraseña():
    contraseña = entry_contraseña.get()
    resultado = evaluar_contrasena(contraseña)  # Utiliza la función evaluar_contrasena
    texto_informacion.insert(tk.END, resultado + "\n\n")

# Crear la ventana principal
ventana = tk.Tk()
ventana.title("Búsqueda de Contraseña")
ventana.geometry("400x500")

# Cuadrícula para organizar widgets
frame = tk.Frame(ventana)
frame.pack(pady=20, padx=20)

# Título centrado
titulo = tk.Label(frame, text="BUSQUEDA DE CONTRASEÑA", font=("Arial", 14, "bold"))
titulo.grid(row=0, column=0, columnspan=2, pady=10)

# Etiquetas y campos de entrada en la cuadrícula
label_usuario = tk.Label(frame, text="Usuario:")
label_usuario.grid(row=1, column=0, sticky="w")
entry_usuario = tk.Entry(frame)
entry_usuario.grid(row=1, column=1)

label_contraseña = tk.Label(frame, text="Contraseña:")
label_contraseña.grid(row=2, column=0, sticky="w")
entry_contraseña = tk.Entry(frame, show="*")  # Muestra asteriscos en lugar de la contraseña
entry_contraseña.grid(row=2, column=1)

# Casilla para mostrar la contraseña
var_mostrar_contraseña = tk.BooleanVar()
check_mostrar_contraseña = tk.Checkbutton(frame, text="Mostrar Contraseña", variable=var_mostrar_contraseña, command=mostrar_contraseña)
check_mostrar_contraseña.grid(row=3, column=0, columnspan=2, pady=5)

# Botón para la evaluación de la contraseña
boton_evaluacion = tk.Button(frame, text="EVALUACIÓN", command=evaluacion_contraseña)
boton_evaluacion.grid(row=4, column=0, columnspan=2, pady=10)

# Cuadro de texto para mostrar información
texto_informacion = tk.Text(ventana, height=5, width=30)
texto_informacion.pack(pady=10)

# Cargar los datos del archivo CSV
archivo_csv = r'C:\Users\Skyrider\Documents\jose\0CONTRASEÑA\euler.csv'
datos_csv = cargar_datos_csv(archivo_csv)

# Crear un frame para los botones de inicio de sesión
frame_botones = tk.Frame(ventana)
frame_botones.pack(pady=10)

boton_iniciar_sesion = tk.Button(frame_botones, text="INICIAR SESIÓN", command=iniciar_sesion)
boton_iniciar_sesion.pack(side=tk.LEFT)

# Ejecutar la aplicación
ventana.mainloop()
