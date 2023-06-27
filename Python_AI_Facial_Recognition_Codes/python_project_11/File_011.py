# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/27 20:15
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_11

import cv2

# 导入一张彩色图片.
gray_img = cv2.imread('Picture.png')

gray_img = cv2.imread('Picture.png', 0)

# 采用自定义阈值方法获得二值化处理之后的图片.
ret_value, binary_img = cv2.threshold(gray_img, 160, 255, cv2.THRESH_BINARY)
print(ret_value)

# 采用OTSU算法来计算阈值.
# ret_value, binary_img = cv2.threshold(gray_img, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU)
# print(ret_value)

cv2.imshow('JvTU', binary_img)

cv2.waitKey(0)

cv2.destroyAllWindows()
