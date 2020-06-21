import numpy as np
from sklearn.linear_model import LinearRegression

m,n = [int(i) for i in input().strip().split(" ")]
X = []
y = []
for i in range(n):
    data = [float(i) for i in input().strip().split(" ")]
    X.append(data[:m])
    y.append(data[m:])
q = int(input())
X_test = []
for i in range(q):
    data = [float(i) for i in input().strip().split(" ")]
    X_test.append(data)

model = LinearRegression()
model.fit(X,y)
y_preds = model.predict(X_test)
for i in y_preds:
    for val in i:
        print(val) 