import pandas as pd
test_df = pd.read_csv('rand.csv')
test_df['Aditya'] += 1
test_df.to_csv('rand.csv',index_label=False, index=False)
