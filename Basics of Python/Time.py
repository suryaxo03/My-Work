time = int(input("Enter the time in seconds: "))
years = time // (365*24*60*60)
time %= (365*24*60*60)
months = time // (30*24*60*60)
time %= (30*24*60*60)
days = time // (24*60*60)
time %= (24*60*60)
hours = time // (60*60)
time %= (60*60)
minutes = time // 60
seconds = time % 60
s = len(str(seconds))
mi = len(str(minutes))
h = len(str(hours))
d = len(str(days))
mo = len(str(months))
y = len(str(years))
print(f"{y*'Y'} {mo*'M'} {d*'D'} {h*'H'} : {mi*'M'} : {s*'S'}")
print(f"{years} {months} {days} {hours} : {minutes} : {seconds}")

##totalSecs = int(input("Enter the time in seconds: "))
##seconds = totalSecs % 60
##totalMins = totalSecs // 60
##
##minutes = totalMins % 60
##totalHrs = totalMins // 60
##
##hours = totalHrs % 24
##totalDays = totalHrs // 24
##
##days = totalDays % 30
##totalMon = totalDays // 30
##
##months = totalMon % 12
##totalYrs = totalMon // 12
##
##years = totalYrs
##s = len(str(seconds))
##mi = len(str(minutes))
##h = len(str(hours))
##d = len(str(days))
##mo = len(str(months))
##y = len(str(years))
##print(f"{y*'Y'} {mo*'M'} {d*'D'} {h*'H'} : {mi*'M'} : {s*'S'}")
##print(f"{years} {months} {days} {hours} : {minutes} : {seconds}")
