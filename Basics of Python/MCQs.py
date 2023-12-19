data = [
    {'Q': 'Capital city', 'C': {'New Delhi', 'Goa', 'Chennai'}, 'A': 'New Delhi'},
    {'Q': 'Tech city', 'C': {'Banglore', 'Mumbai', 'Vizag'}, 'A': 'Banglore'},
    {'Q': 'National bird', 'C': {'Peacock', 'Crow', 'Parrot'}, 'A': 'Peacock'},
    {'Q': 'Smallest state', 'C': {'Goa', 'Sikkim', 'New Delhi'}, 'A': 'Sikkim'},
    {'Q': 'Union Territory', 'C': {"Puducherry", 'Goa', 'Vizag'}, 'A': 'Puducherry'},
    ]

def take(da):
    for i in da:
        print(i.get('Q'))
        for j in i.get('C'):
            print(j)
        print(i.get('A'))
take(data)


    
