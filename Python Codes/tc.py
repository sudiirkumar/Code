from selenium import webdriver
from selenium.webdriver import Chrome
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
import codecs
from webdriver_manager.chrome import ChromeDriverManager
import pickle
import time

email_id="codeinger.sudhir@gmail.com"
password="&udhir2Kum#r"

def get_options():
    options = webdriver.ChromeOptions()
    options.set_capability('detach', True)
    options.add_argument('--ignore-certificate-errors')
    options.add_argument('--ignore-ssl-errors')
    return options

driver=Chrome(options=get_options())
driver.maximize_window()

def save_my_data(xxx, phone, name):
    file=codecs.open('data.csv', 'a+', encoding='utf-8')
    line = xxx + "," + phone + "," + name + "\n"
    file.write(line)
    file.close()

def launchBrowser():
    driver.find_element(By.LINK_TEXT,"Sign in").click()
    time.sleep(2)
    driver.find_element(By.LINK_TEXT,"GOOGLE").click()
    time.sleep(3)
    driver.find_element(By.XPATH,"//input[@type='email']").send_keys(email_id)
    time.sleep(1)
    driver.find_element(By.XPATH,"//input[@type='next']").click()
    time.sleep(2)
    driver.find_element(By.XPATH,"//input[@type='password']").send_keys(password)
    time.sleep(1)
    driver.find_element(By.XPATH,"//input[@type='next']").click()
    time.sleep(2)
    # driver.find_element(By.XPATH,"//input[@type='submit']").click()
    # time.sleep(1)

driver.get("https://www.truecaller.com/#sign-in")
time.sleep(2)
val = int(input())
if val == 1:
    launchBrowser()
val = int(input())

c=100
end=199

if val > 0:
    while c < end:
        xxx = "{0:0=3d}".format(c)
        phone_str="63"+xxx+"29243"
        truecaller_url = "https://www.truecaller.com/search/in/"+phone_str
        driver.get( truecaller_url )
        time.sleep(3)
        name_el = driver.find_element(By.XPATH,"//div[ @data-v-d2a2579f and contains(@class, 'montserrat')]")
        name = name_el.text
        save_my_data(xxx, phone_str, name)
        c += 1
        time.sleep(3)
else:
    print("\nUser Aborted the process")

driver.quit()