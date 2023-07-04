# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/28 8:41
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_12

import cv2

# 加载图片
img = cv2.imread('Picture.png')

''' 3. 中值滤波. '''
result = cv2.medianBlur(img, 3)

cv2.imshow('JvTU', result)

cv2.waitKey(0)
cv2.destroyAllWindows()
