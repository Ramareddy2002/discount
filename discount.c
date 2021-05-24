
    #discount using elif


amount=int(input())
if 1000<=amount<2000:
  print('total bill is',amount)
  dis=10*amount/100
  print('Discount on billed amount is',dis)
  bill=amount-dis
  print('paid bill is',bill)
elif 2000<=amount<3000:
  print('total bill is',amount)
  dis=20*amount/100
  print('Discount on billed amount is',dis)
  bill=amount-dis
  print('paid bill is',bill)
elif 3000<=amount<5000:
  print('total bill is', amount)
  dis=30*amount/100
  print('Discount on billed amount is',dis)
  bill=amount-dis
  print('paid bill is',bill)    
elif amount>5000:
  print('total bill is',amount)
  dis=40*amount/100
  print('Discount on billed amount is',dis)
  bill=amount-dis
  print('paid bill is',bill)  
else:
  print('paid bil is', amount) 
  
  
  '''
  expected output
  1000
  total bill is 1000
  Discount on billed amount is 100.0
  paid bill is 900.0
  '''
 
  