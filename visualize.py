import matplotlib.pyplot as plt
import pandas as pd
import numpy as np


if __name__ == "__main__":
    data = pd.read_csv('runtime.csv')

    plt.plot(data['size'], data['miliseconds'], '-g', label='Messwerte')
    plt.plot([i for i in range(0, 8000000, 10)], [(i/5000) * np.log(i) for i in range(0, 8000000, 10)], '-r', label='O((n/5000) * log(n))')
    plt.grid(True)
    plt.xlabel("Anzahl Elemente in Millionen")
    plt.ylabel("Zeit gebraucht in Millisekunden")
    plt.legend()
    plt.show()
