import cv2

image1 = cv2.imread('image1.jpg')
output = image1.copy()
opencv = cv2.putText(output, 'meo beo',  (400, 600), cv2.FONT_HERSHEY_SIMPLEX, 2, (50, 0, 0), 2)
cv2.imshow("meo beo", opencv)
cv2.waitKey(0)