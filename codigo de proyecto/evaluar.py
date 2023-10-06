def evaluar_contrasena(contrasena):
    puntos = 0
    
    # Verificar la longitud de la contraseña
    if len(contrasena) < 5 or len(contrasena) > 50:
        return "La contraseña debe contener entre 5 y 50 caracteres."
    
    # Transformar la contraseña en una lista de caracteres
    caracteres = list(contrasena)
    
    # Evaluar cada carácter y asignar puntos
    for caracter in caracteres:
        if caracter.isdigit():
            puntos += 1
        elif caracter.isalpha():
            if caracter.isupper():
                puntos += 2
            else:
                puntos += 1
        else:
            puntos += 3
    
    return f"La contraseña obtiene {puntos} puntos."

"""
# Ejemplo de uso
contrasena = input("Ingresa tu contraseña: ")
resultado = evaluar_contrasena(contrasena)
print(resultado)
"""

