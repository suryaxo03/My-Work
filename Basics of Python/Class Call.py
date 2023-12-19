class Tel:
    def __init__(self, mo, mi=1, dis=1.5, dia=True):
        self.model = mo
        self.mic = mi
        self.display = dis
        self.dialPad = dia

    def makeCall(self, number):
        print(f"Calling {number}.")

class Mobile(Tel):
    contact = []
    def __init__(self, mo, mi=1, dis=1.5, dia=True):
        super().__init__(mo, dia=False);

    def addContact(self, name):
        self.contact.append(name)

con = Mobile("Surya's",)
print(con.contact)
con.makeCall(9585485307)
con.addContact("Saadhitya")
print(con.contact)
