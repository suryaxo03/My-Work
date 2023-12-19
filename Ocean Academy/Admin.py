from Pjt_ad import coll
data = [
    {'q': "Capital of India", 'opt': ["New Delhi", "Goa", "Chennai", "Pondicherry"], 'ans': "New Delhi"},
    {'q': "Capital of USA", 'opt': ["New York", "Los Angeles", "Hawaii", "Washington DC"], 'ans': "Washington DC"},
    {'q': "Capital of South Korea", 'opt': ["Busan", "Incheon", "Seoul", "Jeonju"], 'ans': "Seoul"},
    {'q': "Capital of Australia", 'opt': ['Canberra', "Sydney", "Brisbane", "New Castle"], 'ans': "Canberra"},
    {'q': "Capital of Netherlands", 'opt': ["Amsterdam", "The Hague", "Rotterdam", "Breda"], 'ans': "Amsterdam"},
    {'q': "Capital of UK", 'opt': ["Edinburgh", "Cambridge", "Manchester", "London"], 'ans': "London"},
    {'q': "Capital of Japan", 'opt': ["Tokyo", "Kyoto", "Osaka", "Hiroshima"], 'ans': "Tokyo"},
    {'q': "Capital of South Africa", 'opt': ["Johannesburg", "Cape Town", "Durban", "Pretoria"], 'ans': "Cape Town"},
    {'q': "Capital of Germany", 'opt': ["Berlin", "Frankfurt", "Munich", "Hamburg"], 'ans': "Berlin"},
    {'q': "Capital of China", 'opt': ["Shangai", "Beijing", "Shenzen", "Wuhan"], 'ans': "Beijing"},
    {'q': "Capital of Italy", 'opt': ["Venice", "Rome", "Florence", "Verona"], 'ans': "Rome"},
    {'q': "Capital of New Zealand", 'opt': ["Auckland", "Wellington", "Queenstown", "Hamilton"], 'ans': "Wellington"},
    {'q': "Capital of Brazil", 'opt': ["Rio de Janeiro", "Sao Paulo", "Salvador", "Brasilia"], 'ans': "Brasilia"},
    {'q': "Capital of UAE", 'opt': ["Dubai", "Abu Dhabi", "Sharjah", "Ajman"], 'ans': "Abu Dhabi"},
    {'q': "Capital of Poland", 'opt': ["Warsaw", "Lublin", "Krakow", "Poznan"], 'ans': "Warsaw"},
    {'q': "Capital of Russia", 'opt': ["Moscow", "St. Petersburg", "Omsk", "Kazan"], 'ans': "Moscow"},
    {'q': "Capital of Denmark", 'opt': ["Copenhagen", "Aalborg", "Aarhus", "Odense"], 'ans': "Copenhagen"},
    {'q': "Capital of Thailand", 'opt': ["Chiang Mai", "Bangkok", "Kharbi", "Thani"], 'ans': "Bangkok"},
    {'q': "Capital of Canada", 'opt': ["Montreal", "Quebec City", "Vancouver", "Toronto"], 'ans': "Toronto"},
    {'q': "Capital of Switzerland", 'opt': ["Bern", "Zurich", "Geneva", "Lausanne"], 'ans': "Bern"}
    ]
coll.insert_many(data)    
