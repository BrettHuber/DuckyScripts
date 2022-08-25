from pickle import FALSE
import pyautogui
import time
#
pyautogui.FAILSAFE = FALSE
pyautogui.hotkey("win","x")
time.sleep(5.0)
pyautogui.typewrite("A", interval= 0.02)
pyautogui.hotkey("tab")     
pyautogui.hotkey("tab")
time.sleep(0.5)
pyautogui.hotkey("enter")
time.sleep(5)
pyautogui.typewrite("Set-NetFirewallProfile -Enabled False", interval=0.02)
time.sleep(0.5)
pyautogui.hotkey("enter")