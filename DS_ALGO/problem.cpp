#include<iostream>
#include<algorithm>

using namespace std;

float max_Gifts(int numberOfGiftA, int numberOfGiftB, int numberOfGuests){
    int minimumGifts = 0;
    for(int iter = 1; iter < numberOfGuests; iter++)
    {
        float giftDistA = numberOfGiftA / iter;
        float giftDistB = numberOfGiftB / (numberOfGuests - iter);

        if(min(giftDistA,giftDistB) > minimumGifts){
            minimumGifts = min(giftDistA,giftDistB);
        }
        
    }
    return minimumGifts;
}


int main(){
    
    cout<<max_Gifts(2,6,4);
}