soulsborne_games=['elden_ring','dark_souls','sekiro','demon_souls']
print(soulsborne_games)
soulsborne_games.append('bloodborne')

for index,values in enumerate(soulsborne_games) :
    print(index+1,values,sep='-')

soulsborne_games.pop(4)

for index,values in enumerate(soulsborne_games) :
    print(index+1,values,sep='-')
