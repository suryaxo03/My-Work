# Listen to Spotify

inputString = input("Hi, how can I help?\n")
a = "open"
b = "Spotify"
c = "Play"
d = "song"
e = "podcast"
f = "Listen and Enjoy!"
if a in inputString or b in inputString or "spotify" in inputString:
    print("Opening Spotify.")

    if e in inputString:
        if "knowledge" in inputString:
            print(f"{'Asking'} {b} to {c} GK {e}. {f}")

        elif "comedy" in inputString:
            print(f"{'Asking'} {b} to {c} ESP {e}. {f}")

        elif "space" in inputString:
            print(f"{'Asking'} {b} to {c} JWST {e}. {f}")

        elif "med" in inputString:
            print(f"{'Asking'} {b} to {c} healthline {e}. {f}")


    elif d in inputString:

        s1 = "Starboy"
        s2 = "After Hours"
        s3 = "Cupid"
        s4 = "Die for you"

        if "Starboy" in inputString:
            print(f"{'Asking'} {b} to {c} {s1}. {f}")
        elif "After Hours" in inputString:
            print(f"{'Asking'} {b} to {c} {s2}. {f}")
        elif "Cupid" in inputString:
            print(f"{'Asking'} {b} to {c} {s3}. {f}")
        elif "Die for you" in inputString:
            inputString1 = input(f"{s4} by which artist do you want to play?\n")
            if "Weeknd" in inputString1:
                print(f"{'Asking'} {b} to {c} {s4} by The Weeknd. {f}")
            elif "Joji" in inputString1:
                print(f"{'Asking'} {b} to {c} {s4} by Joji. {f}")
            else:
                print("Oops, it seems that the artist haven't released the song that you asked for!")

        else:
            print("Oops, it seems the song or podcast you're searching for is not released yet!")

else:
    print("Spotify can't perform this function!")
