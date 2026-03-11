import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import LabelEncoder
import pickle

def train():
    df = pd.read_csv("data.csv")
    X = df[['team_experience','budget_million','deadline_weeks','complexity']]
    le = LabelEncoder()
    y = le.fit_transform(df['risk'])
    model = RandomForestClassifier().fit(X, y)
    pickle.dump(model, open("risk_model.pkl", "wb"))
    pickle.dump(le, open("label_encoder.pkl", "wb"))
    print("Modelo treinado!")

if __name__ == "__main__": train()