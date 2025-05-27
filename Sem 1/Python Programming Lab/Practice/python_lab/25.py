class time:
    def __init__(self,hour,minute,second):
        self.__hour=hour
        self.__minute=minute
        self.__second=second
    def __add__(self,other):
        h=self.__hour+other.__hour
        m=self.__minute+other.__minute
        s=self.__second+other.__second
        if s>=60:
            s=s%60
            m=m+1
        if m>=60:
            m=m%60
            h=h+1
        if h>=24:
            h=h%24          
        print(f"{h}:{m}:{s}")
hour,minute,second=map(int,input("Enter the first time :").split())
t1=time(hour,minute,second)
hour,minute,second=map(int,input("Enter the second time :").split())
t2=time(hour,minute,second)
t=t1+t2