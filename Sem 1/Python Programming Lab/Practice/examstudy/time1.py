class Times:
    def __init__(self,hour,minute,second):
        self.hour=hour
        self.minute=minute
        self.second=second
    def __add__(self,other):
        h=self.hour+other.hour
        m=self.minute+other.minute
        s=self.second+other.second
        if s>=60:
            s=s%60
            m=m+1
        if m>=60:
            m=m%60
            h=h+1
        if h>=24:
            h=h%24
        print(f"Time is {h}:{m}:{s}")

hour,minute,second=map(int,input("Enter the first time ").split())
t1=Times(hour,minute,second)
hour,minute,second=map(int,input("Enter the second time ").split())
t2=Times(hour,minute,second)
t=t1+t2
