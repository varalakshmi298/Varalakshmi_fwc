from itertools import product

# Print the question
print("6. The minterm expansion of f(P, Q, R) = PQ + QR' + PR' is")
print("(A) m2 + m4 + m6 + m7")
print("(B) m0 + m1 + m3 + m5")
print("(C) m0 + m1 + m6 + m7")
print("(D) m2 + m3 + m4 + m5\n")

# Header for explanation
print("Explanation of the function f(P, Q, R) = PQ + QR' + PR':\n")

# Print formatted truth table header
header = ["P", "Q", "R", "PQ", "QR'", "PR'", "f(P,Q,R)"]
print(" | ".join(col.ljust(6) for col in header))
print("-" * 60)

minterms = []

# Loop through all combinations of P, Q, R
for i, (P, Q, R) in enumerate(product([0, 1], repeat=3)):
    PQ = P & Q
    QR_ = Q & (not R)
    PR_ = P & (not R)
    f = PQ | QR_ | PR_
    
    row = [P, Q, R, PQ, QR_, PR_, f]
    
    # Print each row formatted
    print(" | ".join(str(val).ljust(6) for val in row))

    # Add minterm if function is 1
    if f == 1:
        minterms.append(f"m{i}")

# Show minterm expansion
print("\nMinterm expansion of the function:")
print("f(P, Q, R) =", " + ".join(minterms))

# Final result
correct_option = "(C)" if minterms == ["m2", "m4", "m6", "m7"] else "(?)"
print(f"\nHence, the correct option is: {correct_option}")
