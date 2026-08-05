import cv2

image1 = cv2.imread('image.jpg')

h, w = image1.shape[:2]
ratio = 1000 / w
dim = ( 1000, int( h * ratio))

resize = cv2.resize(image1 , dim)
cv2.imshow("thay doi kich thuoc anh", resize)
cv2.waitKey(0)