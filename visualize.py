import matplotlib.pyplot as plt
import pandas as pd
import numpy as np


if __name__ == "__main__":
    data = pd.read_csv('runtime.csv')

    plt.plot(data['size'], data['miliseconds'], '-g', label='Messwerte')
    plt.plot([i for i in range(0, 8000000, 100)], [(i * np.log2(i))/8100 for i in range(0, 8000000, 100)], '-r', label='O((n) * log(n))')
    plt.grid(True)
    plt.xlabel("Anzahl Elemente in Millionen")
    plt.ylabel("Zeit gebraucht in Millisekunden")
    plt.legend()
    plt.show()
