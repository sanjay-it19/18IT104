a=int(input("Enter the speed"))
def speed(x):
  if(x<=70):
    c="ok"
  else:
    d=x-70
    e=d//5
    if(e<=12):
      c="point : %d"%e
    else:
      c="your license suspended"
  return c;
print(speed(a))
