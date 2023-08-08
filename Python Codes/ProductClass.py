class Product:
    isExtraDiscountAvailable = False
    isPrimeMember = False
    product_extra_discount = 5

    def __init__(self,name,price,discount):
        self.product_name = name
        self.product_price = price
        self.product_discount_perc = discount

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
    def __init__(self,fname,lname,add,bal):
        self.user_fname = fname
        self.user_lname = lname
        self.user_add = add
        self.user_bal = bal

    def getUserName(self):
        name = self.user_fname + " " + self.user_lname
        return name
    
    def getUserAdd(self):
        return self.user_add

    def getUserBal(self):
        return self.user_bal

    def setFirstName(self,new_name):
        self.user_fname = new_name

    def setLastName(self,new_name):
        self.user_lname = new_name

    def setBalance(self,balance):
        self.user_bal = balance

    def setAddress(self,add):
        self.user_add = add

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
    
laptop = Product("Dell",40000,10)
laptop.product_extra_discount = 2 #instance
laptop.changeSaleStatus(True)
print(laptop.calcSellingPrice())

mouse = Product("Logitech",300,5)
mouse.changeSaleStatus(True)
print(mouse.calcSellingPrice())

# u1 = User("Aman","Sharma","Patna",10000)
# # u1.createOrder(laptop)
# # print(u1.user_name)
# u1.setFirstName("Baman")
# u1.setLastName("Tiwari")
# u1.setAddress("Gaya")
# print(u1.getUserName())
# print(u1.getUserAdd())