import cv2

image1 = cv2.imread('image1.jpg')

roi = image1[100 : 500, 200 : 700]
cv2.imshow("Meo beo", roi)
cv2.waitKey(0)