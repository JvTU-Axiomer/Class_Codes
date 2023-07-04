# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/28 10:04
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_13

import cv2

''' 1. 创建基于haar级联分类器. '''
facer = cv2.CascadeClassifier('haarcascade_frontalface_alt2.xml')

''' 2. 导入需要人脸检测的图片，并且灰度化 '''
img = cv2.imread('Pict.png')
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

''' 3. 实现人脸识别 '''
faces = facer.detectMultiScale(gray)

for (x, y, w, h) in faces:
    # 使用红色矩形框来标记人脸.
    # cv2.rectangle(img, (x, y), (x + w, y + h), (0, 0, 255), 2)
    # 使用红色椭圆形来标记人脸.
    center = (x + w // 2, y + h // 2)
    cv2.ellipse(img, center, (w // 2 - 4, h // 2), 0, 0, 360, (0, 0, 255), 2)

cv2.imshow('Facial_Recognition', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
