class Fan:
    SLOW=1
    MEDIUM=2
    FAST=3
    def __init__(self,speed=SLOW,radius=5,color="blue",on="False"):
        self.__speed=speed
        self.__radius=radius
        self.__color=color
        self.__on=on
    def get_speed(self):
        return self.__speed
    def get_radius(self):
        return self.__radius
    def get_color(self):
        return self.__color
    def get_status(self):
        return self.__on
    def put_speed(self,speed):
        self.__speed=speed
    def put_radius(self,radius):
        self.__radius=radius
    def put_color(self,color):
        self.__color=color
    def put_status(self,on):
        self.__on=on
f1=Fan(20,20,"red","True")
f1.put_color("black")
    

    