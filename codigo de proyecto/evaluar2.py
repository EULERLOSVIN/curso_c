import math

def calcular_entropia(contrasena):
    # Calcular la longitud de la contraseña
    longitud = len(contrasena)
    
    # Calcular la diversidad de caracteres (suponiendo un conjunto de caracteres de 128)
    caracteres_unicos = len(set(contrasena))
    
    # Calcular la entropía utilizando la fórmula de Shannon
    entropia = longitud * math.log2(caracteres_unicos)
    
    return entropia

def evaluar_contrasena_entropia(contrasena):
    entropia = calcular_entropia(contrasena)
    if entropia >= 40:
        return "La contraseña tiene una alta entropía y es segura."
    else:
        return "La contraseña tiene una baja entropía y debe ser más segura."


"""
# Solicitar una contraseña al usuario
contrasena = input("Ingresa tu contraseña: ")

# Evaluar la seguridad de la contraseña
resultado = evaluar_contrasena_entropia(contrasena)

# Mostrar el resultado
print(resultado)
"""

