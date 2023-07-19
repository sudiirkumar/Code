class Product:
    product_name = "Product_name"
    product_price = 0
    product_discount_perc = 0
    product_extra_discount = 0
    isExtraDiscountAvailable = False
    isPrimeMember = False

    def setValues(self,name,price,discount,extra_dis):
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
laptop = Product()
laptop.setValues("Dell",40000,10,5)
laptop.changeSaleStatus(True)
print(laptop.calcSellingPrice())

mouse = Product()
mouse.setValues("Logitech",300,5,0)
print(mouse.calcSellingPrice())