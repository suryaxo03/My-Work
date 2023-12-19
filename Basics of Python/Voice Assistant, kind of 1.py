import time
inStr = input("Hi, how can I help?\n")
a = "alarm"
b = "reminder"
c = "timer"
d = "stopwatch"
reqStr = inStr.lower()
if ":" in reqStr and a in reqStr or "am" in reqStr or "pm" in reqStr:
    print(f"Alarm is being set at{reqStr.replace('set an alarm at ', ' ')}.")

elif a in reqStr:
    inStr1 = input("At what time do you want to set an alarm?\n")

    print(f"Alarm is set at {inStr1}")
    
elif "remind me" in reqStr:
    print(f"OK, I'll {inStr.replace('me', 'you')}")

elif b in reqStr:
    inStr1 = input("For/At what time do you want to set a reminder?\n")
    reqStr1 = inStr1.lower()
    if ":" in reqStr1 or "am" in reqStr1 or "pm" in reqStr1 or "o" in reqStr1:
        print(f"Reminder is being set at {inStr1}.")

    elif "min" in reqStr1 or "hour" in reqStr1 or "sec" in reqStr1:
        print(f"Reminder is set for {inStr1} from now.")

elif c in reqStr:
    if "min" in reqStr or "hour" in reqStr or "sec" in reqStr:
        print(f"Timer is set for {reqStr.replace('set a timer for ', '')}")
        
    else:
        inStr1 = input("How long do you want to set a timer?\n")
        print(f"Timer is set for {inStr1}")
elif d in reqStr:
    e = 'start'
    f = 'stop'
    inStr1 = input(f"Give '{e.upper()}' to start stopwatch.\n")

    if e in inStr1.lower():
        startTime = time.time()
        inStr2 = input(f"Stopwatch started. Give '{f.upper()}' to stop stopwatch.\n")

        if f in inStr2.lower():
            endTime = time.time()
            timeElapsed = endTime - startTime
            print(f"Stopwatch stopped. Elapsed time = {timeElapsed} seconds.")
        else:
            print("Invalid input!")
    
