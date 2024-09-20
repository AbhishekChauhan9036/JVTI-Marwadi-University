import speech_recognition as sr
import pyttsx3 

r = sr.Recognizer() 

def SpeakText(command):
    engine = pyttsx3.init()
    engine.say(command) 
    engine.runAndWait()

while True:
    # Asking the user if they want to start speaking
    user_input = input("Type 'start' to speak or 'exit' to quit: ").strip().lower()
    
    if user_input == 'start':    
        try:
            with sr.Microphone() as source:
                r.adjust_for_ambient_noise(source, duration=0.1)
                print("Listening...")
                audio = r.listen(source)
                
                MyText = r.recognize_google(audio)
                MyText = MyText.lower()

                print("Did you say:", MyText)
                SpeakText(MyText)
                
        except sr.RequestError as e:
            print("Could not request results; {0}".format(e))
            
        except sr.UnknownValueError:
            print("Unknown error occurred")
    
    elif user_input == 'exit':
        print("Exiting program...")
        break
    
    else:
        print("Invalid input. Please type 'start' or 'exit'.")
