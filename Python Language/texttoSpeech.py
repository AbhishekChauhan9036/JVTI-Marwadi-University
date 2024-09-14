
from gtts import gTTS
import os
mytext = "Chin Tapak Dam Dam"
language = 'hi'
myobj = gTTS(text=mytext, lang=language, slow=False)
myobj.save("welcome.mp3")
os.system("start welcome.mp3")