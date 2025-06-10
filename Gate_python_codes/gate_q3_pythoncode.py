# Print the question and options
print("9. The Boolean expression for the output f of the multiplexer shown below is:\n")

print("(A)  (P ⊕ Q ⊕ R )'")
print("(B)  P ⊕ Q ⊕ R")
print("(C)  P + Q + R")
print("(D)  (P + Q + R )'\n")

# Explanation header
print("Explanation:\n")

print("This is a 4:1 MUX with select lines P and Q.")
print("So the selection is based on 2 bits: P (MSB), Q (LSB)")
print("The input mapping is as follows (from top to bottom):")

print("""
Selector PQ | Input Connected
-----------------------------
     00     | R
     01     | R'
     10     | R'
     11     | R
""")

print("So the MUX behavior is:\n")

print("f = (P=0,Q=0)*R + (P=0,Q=1)*R' + (P=1,Q=0)*R' + (P=1,Q=1)*R")

# Using select inputs, we derive f using Boolean equation:
print("\nLet’s write the function as:")
print("f = (~P & ~Q & R) + (~P & Q & R') + (P & ~Q & R') + (P & Q & R)")

print("\nGroup and simplify the expression:")

print("→ f = (R & (~P & ~Q + P & Q)) + (R' & (~P & Q + P & ~Q))")
print("→ f = R * XNOR(P, Q) + R' * XOR(P, Q)")
print("→ f = P ⊕ Q ⊕ R")

# Final answer
print("\nHence, the correct option is: (B)")
