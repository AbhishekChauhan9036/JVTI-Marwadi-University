import speech_recognition as sr
import pyttsx3

# Initialize the speech recognition and text-to-speech engine
recognizer = sr.Recognizer()
tts_engine = pyttsx3.init()

# Function to convert text to speech
def speak_text(text):
    tts_engine.say(text)
    tts_engine.runAndWait()

# Function to recognize speech and convert it to text
def get_voice_input():
    with sr.Microphone() as source:
        print("Listening...")
        recognizer.adjust_for_ambient_noise(source)  # Adjust for background noise
        audio = recognizer.listen(source)
        
        try:
            print("Recognizing...")
            query = recognizer.recognize_google(audio)
            print(f"User said: {query}")
            return query
        except sr.UnknownValueError:
            speak_text("Sorry, I didn't catch that. Could you please repeat?")
        except sr.RequestError as e:
            speak_text("Sorry, I'm having trouble connecting to the speech service.")
        return None

# Function to handle a simple response system
def generate_response(query):
    # Simple hard-coded responses
    if "hello" in query.lower():
        return "Hello! How can I help you?"
    elif "how are you" in query.lower():
        return "I'm doing great, thank you! How about you?"
    elif "exit" in query.lower():
        return "Goodbye! Have a nice day!"
    else:
        return "I'm sorry, I don't have an answer to that yet."

# Main loop for the voice interaction
def main():
    while True:
        query = get_voice_input()  # Get the voice input
        if query is not None:
            response = generate_response(query)  # Generate a response
            speak_text(response)  # Speak out the response
            
            if "exit" in query.lower():  # End the loop if 'exit' is said
                break

if __name__ == "__main__":
    main()
