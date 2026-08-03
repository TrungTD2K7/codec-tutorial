import cv2

image = cv2.imread('image1.jpg')
h, w = image.shape[:2]
print("Height = {}, Width = {}".format(h, w))