#!/usr/bin/python3
"""
grid es una lista de lista de enteros
0 representa una zona de agua
1 representa una zona terrestre
Una celda es un cuadrado con lado de longitud 1
Las celdas de la cuadrícula están conectadas horizontal/verticalmente (no en diagonal).
La cuadrícula es rectangular, el ancho y la altura no superan los 100
Grid está completamente rodeada de agua y hay una isla (o nada).
La isla no tiene “lagos” (agua adentro que no está conectada con el agua alrededor de la isla).
"""


def island_perimeter(grid):
    """
    that returns the perimeter of the island

    Args:
        grid (list): is a list of list of integers
    """
    assert len(grid) != 0, "error"
    is_square(grid)
    print(this_list(grid))


def this_list(grid):
    """crea una nueva lista

    Args:
        grid (list): none
    """
    new_list = []
    for x in grid:
        for j in x:
            if j == 1:
                new_list.append(j)
    return new_list

def is_square(grid):
    """validamos el square

    Args:
        grid (list): isla
    """
    square = len(grid[0])
    for isla in grid:
        """
        validamos que todas que el contenido de grid sea correcto
        """
        square2 = len(isla)
        assert len(isla) != 0, "error"
        assert square == square2, "Error"
    
    
