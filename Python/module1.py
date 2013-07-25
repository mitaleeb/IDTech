#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      Student
#
# Created:     24/07/2013
# Copyright:   (c) Student 2013
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import random

def main():
    class card:
        def __init__(self,suit,value):
            self.suit=suit
            self.value=value

        def getSuit(self):
            return self.suit

        def getValue(self) :
            return self.value

        def __str__(self):
            card= self.value + ' of '+ self.getSuit
            return card

    numcards = []
    facecards= ["A","J","Q","K"]
    suits=["hearts","diamonds","spades","clubs"]
    deck=[]


    for x in range(2,11):
        numcards.append(str(x))
    numcards.extend(facecards)

    for y in suits:
        for z in numcards:
            cards= card(y,z)
            deck.append(cards)

    for card in deck:
        print(card)






if __name__ == '__main__':
    main()
