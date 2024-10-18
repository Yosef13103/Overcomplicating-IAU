# Helpful Functions for Keras and TensorFlow.
from sklearn import preprocessing

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


# Encode text values to indexes (i.e., [1],[2],[3] for (red,green,blue) values).
def encode_text_index(df, name):
    
    le = preprocessing.LabelEncoder()
    df[name] = le.fit_transform(df[name])
    return le.classes_


# Convert a Pandas DataFrame to the (x,y) inputs that TensorFlow needs.
def to_xy(df, target):
    
    result = []
    for x in df.columns:
        if x != target:
            result.append(x)
            
    # Find out the type of the target column. Is it really this hard? :(
    target_type = df[target].dtypes
    target_type = target_type[0] if hasattr(target_type, '__iter__') else target_type
    # Encode to int for classification, float otherwise. TensorFlow likes 32 bits.
    if target_type in (np.int64, np.int32):
        # Classification
        dummies = pd.get_dummies(df[target])
        return df.as_matrix(result).astype(np.float32), dummies.as_matrix().astype(np.float32)
    else:
        # Regression
        return df.as_matrix(result).astype(np.float32), df.as_matrix([target]).astype(np.float32)
