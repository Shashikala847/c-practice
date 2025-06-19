class channapattana:
    def __init__(self, village, city):
        self.info = (village, city)
        
    def show_info(self):
        print("channapattana.info:",self.info)
        
s=channapattana("brahmanipura","ramangara")
s.show_info()