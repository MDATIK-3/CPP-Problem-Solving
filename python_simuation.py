import numpy as np
import matplotlib.pyplot as plt
from matplotlib.table import Table

def lcs_with_arrows(X, Y):
    m = len(X)
    n = len(Y)
    L = [[0] * (n+1) for i in range(m+1)]
    arrows = [[""] * (n+1) for i in range(m+1)]

    # Building the L table and keeping track of arrows
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if X[i-1] == Y[j-1]:
                L[i][j] = L[i-1][j-1] + 1
                arrows[i][j] = '↖'
            elif L[i-1][j] >= L[i][j-1]:
                L[i][j] = L[i-1][j]
                arrows[i][j] = '↑'
            else:
                L[i][j] = L[i][j-1]
                arrows[i][j] = '←'

    # Trace back to find the LCS path
    lcs_path = []
    i, j = m, n
    while i > 0 and j > 0:
        if arrows[i][j] == '↖':
            lcs_path.append((i, j))
            i -= 1
            j -= 1
        elif arrows[i][j] == '↑':
            i -= 1
        else:
            j -= 1

    return L, arrows, L[m][n], lcs_path

def plot_lcs_table_with_arrows(X, Y, L, arrows, lcs_path):
    fig, ax = plt.subplots()
    ax.axis('tight')
    ax.axis('off')
    tb = Table(ax, bbox=[0,0,1,1])
    nrows, ncols = len(L), len(L[0])
    width, height = 1.0 / (ncols + 1), 1.0 / (nrows + 1)

    # Add cells with values and arrows
    for (i, j), val in np.ndenumerate(L):
        cell_color = 'white'
        if (i, j) in lcs_path:
            cell_color = 'lightgreen'
        tb.add_cell(i+1, j+1, width, height, text=f'{val}\n{arrows[i][j]}', loc='center', facecolor=cell_color)

    # Row and column labels
    for i, label in enumerate(['0'] + list(X)):
        tb.add_cell(i+1, 0, width, height, text=label, loc='right', edgecolor='none', facecolor='none')
    for j, label in enumerate(['0'] + list(Y)):
        tb.add_cell(0, j+1, width, height, text=label, loc='center', edgecolor='none', facecolor='none')

    ax.add_table(tb)
    plt.show()

# Example usage
X = "abracadabra"
Y = "avocado"
L, arrows, lcs_length, lcs_path = lcs_with_arrows(X, Y)
plot_lcs_table_with_arrows(X, Y, L, arrows, lcs_path)
print(f"Length of LCS: {lcs_length}")


