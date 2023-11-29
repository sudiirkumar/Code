import pyautogui,time,win32com.client,random
from keyboard import press

def changeTab():
    pyautogui.keyDown('alt')
    time.sleep(.05)
    pyautogui.press('tab')
    time.sleep(.05)
    pyautogui.keyUp('alt')

messages = ['Happy Birthday Pro!!','Janmdin Mubarak ho Butti!']
time.sleep(5)
shell  = win32com.client.Dispatch("WScript.Shell")

for i in range(100):
    message = random.choice(messages)
    shell.SendKeys(message)
    press('enter')
    changeTab()