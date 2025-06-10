from graphviz import Digraph

# 1. Print the question
print("Which of the following circuits is the realization of the function F = X'Y' + YZ?")
print("\nThe correct option is (D), and the option D is:")

# 2. Create logic diagram
dot = Digraph(comment='Logic Circuit: F = ¬X·¬Y + Y·Z')

# Input nodes
dot.node('X', 'X', shape='circle')
dot.node('Y', 'Y', shape='circle')
dot.node('Z', 'Z', shape='circle')

# NOT gates
dot.node('NOT_X', 'NOT', shape='box')
dot.edge('X', 'NOT_X')

dot.node('NOT_Y', 'NOT', shape='box')
dot.edge('Y', 'NOT_Y')

# AND1: (¬X AND ¬Y)
dot.node('AND1', 'AND', shape='box')
dot.edge('NOT_X', 'AND1')
dot.edge('NOT_Y', 'AND1')

# AND2: (Y AND Z)
dot.node('AND2', 'AND', shape='box')
dot.edge('Y', 'AND2')
dot.edge('Z', 'AND2')

# OR gate
dot.node('OR1', 'OR', shape='box')
dot.edge('AND1', 'OR1')
dot.edge('AND2', 'OR1')

# Output node
dot.node('F', 'F', shape='doublecircle')
dot.edge('OR1', 'F')

# Render and view
dot.render('logic_F_expr', view=True, format='png')

