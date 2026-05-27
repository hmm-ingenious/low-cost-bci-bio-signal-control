import serial
import keyboard

ser = serial.Serial('COM3', 115200)

print("BCI Control Started...")

while True:
    try:
        line = ser.readline().decode().strip()

        if line:
            print("Detected:", line)

            if line == "BLINK":
                keyboard.press_and_release('space')
                print("Jump")

            elif line == "MUSCLE":
                keyboard.press_and_release('down')
                print("Crouch")

    except Exception as e:
        print("Error:", e)
