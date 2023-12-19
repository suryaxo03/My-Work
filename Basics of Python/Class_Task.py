class measInstr:

    def __init__(self, n, u, s, r):
        self.name = n
        self.units = u
        self.spec = s
        self.range = r

    def classify(self):
        if 'MI' in self.spec:
            self.typeCurrent = 'AC'
        elif 'MC' in self.spec:
            self.typeCurrent = 'DC'
        else:
            self.typeCurrent = 'DC/AC'
        return self.typeCurrent
            
m1 = measInstr("Voltmeter", "volt", ['MC'], [0, 30])

print(m1.classify())

class proLang:

    def __init__(self, name, typ, diff):
        self.name = name
        self.type = typ
        self.diff = diff

l1 = proLang("Python", "Hybrid", "Easiest")

class camera:

    def __init__(self, brand, model, sensor, ty, cost):
        self.brand = brand
        self.model = model
        self.sensor = sensor
        self.ty = ty
        self.cost = cost

c1 = camera('Canon', 'EOSR50', '24.2 APS-C CMOS', 'Beginner\'s', '76000')

print(c1.ty)

class Subject:
    def __init__(self, name, cred, dept):
        self.name = name
        self.cred = cred
        self.dept = dept
    def weight(self):
        if self.cred >= 4:
            self.diff = 'High weightage'
        else:
            self.diff = 'Low weightage'
        return self.diff
s1 = Subject('Data Structures and Algorithms', 4, 'CSE')
print(s1.weight())

class Games:
    def __init__(self, name, company, foundYear, cost, ramreq):
        self.name = name
        self.company = company
        self.foundYear = foundYear
        self.cost = cost
        self.ramreq = ramreq
    def mobComp(self):
        if self.ramreq >= 2:
            self.comp = 'Can\'t run in mobile phone'
        else:
            self.comp = 'Runs in mobile phone!'
        return self.comp
g1 = Games('GTAV', 'Rockstar Games', 2015, '$265M', 4)
print(g1.name)
print(g1.mobComp())

class superCar:
    def __init__(self, brand, model, engModel, hp, cost):
        self.model = model
        self.brand = brand
        self.engModel = engModel
        self.hp = hp
        self.cost = cost
        
s1 = superCar('Bugatti', 'Chiron', 1500, '8IW16', '$3M')
print(s1.brand, s1.model, s1.cost)

