import cv2

image1 = cv2.imread('image1.jpg')   

(B, G, R) = image1[100, 100]
print("R = {}, G = {}, B = {}".format(R, G, B))

B = image1[100, 100, 0]
print("B = {}".format(B))