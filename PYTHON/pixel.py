import os
import cv2
# import numpy as np
# import matplotlib.pyplot as plt

imagem = cv2.imread("lampada.png")
cv2.imshow("Original", imagem)
cv2.waitKey(0)
cv2.destroyAllWindows()
