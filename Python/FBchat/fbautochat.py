from fbchat import Client
from fbchat.models import Message
import fbchat
# import re
fbchat._util.USER_AGENTS = [
    "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Safari/537.36"]
# fbchat._state.FB_DTSG_REGEX = re.compile(r'"name":"fb_dtsg","value":"(.*?)"')
username = 'NguyenCreateForDev@gmail.com'
password = 'Nguyen2702$facebook'

client = Client(username, password)

users = client.fetchThreadList()
print(users)
