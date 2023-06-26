# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/26 20:48
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_10

import cv2
import numpy as np

''' 创建、命名窗口并修改窗口的大小. '''
cv2.namedWindow('JvTU', cv2.WINDOW_NORMAL)
cv2.resizeWindow('JvTU', 800, 600)

''' 自定义的回调函数： '''


def call_back(value):
    print(value)


''' 创建三个进度条，分别代表R、G、B. '''
# 回调函数的函数名之后不能添加小括号，添加小括号表示自己手动调用函数，而这里应为自动调用函数.
cv2.createTrackbar('R', 'JvTU', 0, 255, call_back)
cv2.createTrackbar('G', 'JvTU', 0, 255, call_back)
cv2.createTrackbar('B', 'JvTU', 0, 255, call_back)

''' 创建调色板的背景，一开始调色板的初始背景颜色为：黑色（每一个像素点的RGB都是0）. '''
# 思路：利用一个元素均为0的三维矩阵来表示黑色.

# 创建一个矩阵，矩阵的元素都是0.
img = np.zeros((600, 800, 3), dtype=np.uint8)  # 创建一个维度为三维的、有着600×800×3维数的新矩阵.

while True:
    # 获取三个进度条的值，其实就是RGB的值.
    r = cv2.getTrackbarPos('R', 'JvTU')
    g = cv2.getTrackbarPos('G', 'JvTU')
    b = cv2.getTrackbarPos('B', 'JvTU')

    # ：是切片的符号.
    # 切片在列表中的用法：[开始位置:结束位置].
    # 注意在OpenCV默认使用的模型是BGR模型.
    img[:] = [b, g, r]  # [:]表示从第一个开始，到最后一个结束.因此这里代表每一个像素点，每一个像素点的颜色均相同.

    # 在窗口中显示调色板.
    cv2.imshow('JvTU', img)
    key = cv2.waitKey(1)
    if key == ord('q'):
        break

# 关闭窗口.
cv2.destroyAllWindows()
