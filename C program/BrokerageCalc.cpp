#include<bits/stdc++.h>
using namespace std;
float calc(int,int,bool);
float Round(float);
int main(){
    int quantity;
    int pricePerStock;
    bool isBuy;
    cin>>quantity>>pricePerStock>>isBuy;
    cout<<calc(quantity,pricePerStock,isBuy)<<endl;
    return 0;
}
float calc(int quantity,int pricePerStock,bool isBuy){
    float turnOver = quantity * pricePerStock;
    turnOver = Round(turnOver);

    float brokerageCharge;
    brokerageCharge = 2.5 * turnOver / 100;
    if(brokerageCharge<15){
        brokerageCharge = 15;
    }
    brokerageCharge = Round(brokerageCharge);

    float STT = 0.1 * turnOver /100;
    STT = Round(STT);

    float exCharges = 0.00345 * turnOver /100;
    exCharges = Round(exCharges);

    float SEBIcharges = 0.0001 * turnOver /100;
    SEBIcharges = Round(SEBIcharges);

    float stampDuty = 0;
    if(isBuy){
        stampDuty = 0.015 * turnOver /100;
    }
    stampDuty = Round(stampDuty);

    float totalCharge = brokerageCharge + exCharges + SEBIcharges;
    float gst = totalCharge * 18 /100;
    gst = Round(gst);
    totalCharge += gst + stampDuty + STT;

    float value = turnOver - totalCharge;
    cout<<endl<<endl;
    cout<<"Brokerage charge: "<<brokerageCharge<<"\nSTT: "<<STT<<"\nExchange charges: "<<exCharges<<endl;
    cout<<"SEBI charges: "<<SEBIcharges<<"\nStamp Duty charges: "<<stampDuty<<"\nGST: "<<gst<<"\nTotal charge: "<<totalCharge<<endl;
    return value;
}
float Round(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}