import cv2

image1 = cv2.imread('image1.jpg')
B , G , R = cv2.split(image1)
imagedao =cv2.merge([G , R , B])
cv2.imshow('anhgoc',image1)
cv2.imshow('anhdao',imagedao)
cv2.waitKey(0)