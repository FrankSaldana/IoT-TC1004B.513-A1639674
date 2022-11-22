import firebase_admin
from firebase_admin import credentials
from firebase_admin import firestore

#Application Default Credentials are automatically created
cred = credentials.Certificate('credentials.json')
app = firebase_admin.initialize_app(cred)
db = firestore.client()

sensor_1_ref = db.collection(u'sensor1')
docs = sensor_1_ref.stream()

for doc in docs:
    print(f'{doc.id} => {doc.to_dict()}').
    