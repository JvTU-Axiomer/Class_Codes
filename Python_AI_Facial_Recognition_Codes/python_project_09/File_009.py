# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/26 8:51
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_09

import cv2
# 电脑上的摄像头编号从下标0开始，因此0表示第一个摄像头.
# 打开视频设备.
cap = cv2.VideoCapture(0)

cv2.namedWindow('JvTU', cv2.WINDOW_NORMAL)
cv2.resizeWindow('JvTU', 800, 600)

# 循环来读取每一帧图片.
while True:
    # 从摄像头读取视频，返回两个值.第一个：是否读取到图片；第二个：当前读到的一帧图片.
    flag, img = cap.read()
    # 将视频帧放在窗口中显示.
    cv2.imshow('JvTU', img)
    # 建议调到25以内，表示每25毫秒刷新一张图片.
    key = cv2.waitKey(1)
    if key == ord('q'):
        break  # 用户输入q键，然后退出循环.

cap.release()  # 释放摄像头资源.
cv2.destroyAllWindows()
