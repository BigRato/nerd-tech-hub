import pickle
import pandas as pd

def predict():
    model = pickle.load(open("risk_model.pkl", "rb"))
    le = pickle.load(open("label_encoder.pkl", "rb"))
    print("\n=== AI Risk Predictor ===")
    exp = float(input("Equipe (anos exp): "))
    bug = float(input("Orçamento (M$): "))
    dl = float(input("Prazo (semanas): "))
    comp = int(input("Complexidade (1-5): "))
    pred = model.predict([[exp, bug, dl, comp]])
    print(f"Risco: {le.inverse_transform(pred)[0]}")

if __name__ == "__main__": predict()