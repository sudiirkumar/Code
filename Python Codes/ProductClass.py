class Product:
    isExtraDiscountAvailable = False
    isPrimeMember = False

    def __init__(self,name,price,discount,extra_dis):
        self.product_name = name
        self.product_price = price
        self.product_discount_perc = discount
        self.product_extra_discount = extra_dis

    def printInfo(self):
        print("Name: ",self.product_name)
        print("Price: ",self.product_price)
        print("Discount: ",self.product_discount_perc)
        print("Extra Discount: ",self.product_extra_discount)
    def calcShippingPrice(self):
        if self.isPrimeMember or self.product_price>=1000:
            return 0
        return 50
    def calcSellingPrice(self):
        if self.isExtraDiscountAvailable:
            selling_price = self.product_price - (self.product_price*(self.product_discount_perc+self.product_extra_discount))/100
        else:
            selling_price = self.product_price - (self.product_price*(self.product_discount_perc))/100
        selling_price = selling_price + self.calcShippingPrice()
        return selling_price
    def changeSaleStatus(self,b):
        self.isExtraDiscountAvailable = b

class User:
    def __init__(self,name,add,bal):
        self.user_name = name
        self.user_add = add
        self.user_bal = bal

    def printInfo(self):
        print("User name:",self.user_name)
        print("User address:",self.user_add)
        print("User balance:",self.user_bal)

    def createOrder(self,product):
        print("PRODUCT INFORMATION")
        product.printInfo()
        print("Selling price:",product.calcSellingPrice())
        choice = input("Confirm order? (Y/N): ")
        if choice=="Y":
            if self.user_bal>=product.calcSellingPrice():
                print("Order successful")
                self.user_bal = self.user_bal - product.calcSellingPrice()
                print("Remaining balance: ",self.user_bal)
            else:
                print("Insufficient balance")
        else:
            print("Order cancelled")
    
laptop = Product("Dell",40000,10,5)
laptop.changeSaleStatus(True)
# print(laptop.calcSellingPrice())
laptop.product_price = 1000

mouse = Product("Logitech",300,5,2)
# print(mouse.calcSellingPrice())

u1 = User("ABC","Patna",100000)
u1.createOrder(laptop)