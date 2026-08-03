import cv2

image1 = cv2.imread('image1.jpg')

resize = cv2.resize(image1, ( 500, 500))
cv2.imshow("thay doi kich thuoc anh", resize)
cv2.waitKey(0)