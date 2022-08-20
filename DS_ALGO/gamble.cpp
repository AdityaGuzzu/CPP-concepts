#include<iostream>
#include<chrono>
#include<random>

//A function to search if the given element is present in an array
bool search(int array[], int search_item)
{
    bool presence = false;
    for(int i=0; i< sizeof(array)/sizeof(int); i++)
    {
        if(array[i] == search_item)
        {
            presence = true;
        }
    }

    return presence;
}

bool gamble(const int bet)
{
    using namespace std::chrono;

    //initialise the seed value to the system time
    unsigned seed = system_clock::now().time_since_epoch().count();

    //We are using the merienne twister mt19937 engine 
    std::mt19937 generator (seed);

    int _rand_num;
    _rand_num = generator()%10 + 1;

    //returns true if generated random number is equal to the bet
    return _rand_num == bet;
}

int main()
{
    int _bet_num;
    int balance = 10000;
    int _bet_amount;
    while(balance > 0)
    {
        std::cout<<std::endl<<"Balance = "<<balance;
        betting:
        std::cout<<std::endl<<"How much do you want to bet?";
        try
        {
            std::cin>>_bet_amount;
            if(_bet_amount > 10000)
            throw _bet_amount;
        }
        catch(int)
        {
            std::cerr<<std::endl<<"Enter the right amount between 1, 10000";
            goto betting;
        }
        
        number_throw:
        std::cout<<"Enter a number between 1 and 10";
        try
        {
            std::cin>>_bet_num;
            if(_bet_num > 10 || _bet_num < 1)
            {
                throw _bet_num;
            }
            if(gamble(_bet_num))
            {
                std::cout<<"Wow, you won the bet! ";
                balance += _bet_amount;
            }
            else
            {
                std::cout<<"Better Luck Next time!";
                balance -= _bet_amount;
            }
        }
        catch(int)
        {
            std::cerr<<std::endl<<"Enter correct number";
            goto number_throw;
        }
        
    }
    std::cout<<std::endl<<"You are out of money. Game Ended.";
    
    
}
