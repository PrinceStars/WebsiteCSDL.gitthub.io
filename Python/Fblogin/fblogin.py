from selenium import webdriver
from time import sleep
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.options import Options

usr = 'NguyenCreateForDev@gmail.com'
pwd = 'Nguyen2702$facebook'

driver = webdriver.Chrome(ChromeDriverManager().install())
driver.get('https://www.facebook.com/login')
print("Opened facebook")
sleep(1)

username_box = driver.find_element_by_id('email')
username_box.send_keys(usr)
print("Email Id entered")
sleep(1)

password_box = driver.find_element_by_id('pass')
password_box.send_keys(pwd)
print("Password entered")

login_box = driver.find_element_by_id('loginbutton')
login_box.click()

print("Done")
