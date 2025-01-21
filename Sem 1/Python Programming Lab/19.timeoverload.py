class Time:
    def __init__(self,hour,minute,second):
        self.hour = hour
        self.minute = minute
        self.second = second
    def __add__(self,Time2):
        second = (self.second + Time2.second)%60
        minute = (self.second + Time2.second)//60 + (self.minute + Time2.minute)%60
        hour = (self.minute + Time2.minute)//60 + self.hour + Time2.hour
        sum=Time(hour,minute,second)
        sum.get_time()
       
    def get_time(self):
        print(f"{self.hour}:{self.minute}:{self.second} ")

hour,minute,second=map(int,input("Enter the first time- Hour, Minute and Second ").split())
T1=Time(hour,minute,second)
hour,minute,second=map(int,input("Enter the second time- Hour, Minute and Second ").split())
T2=Time(hour,minute,second)
T1+T2


    
        
    
        
        
        
        
        