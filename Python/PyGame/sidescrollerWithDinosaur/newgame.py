import pygame as pg
import newgameClasses as pgC
import copy
pg.init()

screen = pg.display.set_mode((880, 660))
#resources
backgroundImg = pg.image.load("img/1sky.png")
#player resources
idlePlayerImg = pg.image.load("img/player/idleA.png")
jumpPlayerImg = pg.image.load("img/player/jumpA.png")

grassImg = pg.image.load("img/grass.png")
#background
bg = backgroundImg
bgX = 0
bgY = 0

def background(x):
    global bgX
    screen.blit(bg, (x, 0))
    bgX -= 0.2
    if bgX < -1000:
        bgX = 800

#grass
    #grassmapvariables
grassmap = (
    [0,0,0,0,0,0,0,0,0,0],
    [0,0,0,0,0,0,0,0,0,0],
    [1,1,0,1,1,1,1,1,1,1],
    [0,1,1,0,0,0,0,0,0,0],
    [0,1,0,1,0,1,0,1,1,1],
    [0,0,0,0,0,0,0,0,0,0],
    [0,0,0,1,1,0,0,0,0,1],
    [1,1,1,1,1,0,1,1,1,1],
    [0,0,0,0,0,0,0,0,0,0],
    [0,0,0,0,0,0,0,0,0,0],
    [0,0,0,0,1,0,0,0,0,0],
    [1,1,0,0,0,0,0,0,0,0],
  
   )

grassmaploc = copy.deepcopy(grassmap)


gx = 0
gy = 0

xPosCount = 0
yPosCount = 0 

for seg in range(len(grassmaploc)):
    for t in range(len(grassmaploc[seg])):
        xPosCount += 1
        grassmapgran = (gx, gy)
        grassmaploc[seg][t] = grassmapgran
        gx += 94
        if xPosCount == 10:
            xPosCount = 0
            yPosCount += 1
            gx = 0
            gy += 58
print(grassmaploc)
    #grassmap logic
def grassM2():
    for seg in range(len(grassmap)):
        for val in range(len(grassmap[seg])):
        # 
            if grassmap[seg][val] == 1:
                #print(grassmaploc[seg][val][0])
                
                for ix in range(0, 99, 20):
                    screen.blit(grassImg, (grassmaploc[seg][val][0] + ix, grassmaploc[seg][val][1]))

#left-most grass
l1grassX = (0, 160)
l1grassY = 560
#middle grass
m1grassX = (180, 700)
m1grassY = 620

m2grassX = (280, 660)
m2grassY = 520
#right-most grass
r1grassX = (750, 880)
r1grassY = 550

def grass(x, y):
    startX = x[0]
    endX = x[1]
    for i in range(startX, endX, 20):
        screen.blit(grassImg, (i, y))

#player function
isi = True
isj = False

def pimage():
    if isi == True:
        return idlePlayerImg
    elif isj == True:
        return jumpPlayerImg
    else:
        return idlePlayerImg

playerX = 450
playerY = 435
CplayerX = 0
CplayerY = 0
playerG = 440

def player(x, y):
    screen.blit(pimage(), (x, y))

def jump():
    global isi, isj, CplayerY
    if isi == True and isj == False:
        isi = False
        isj = True
        CplayerY = -4.0

#boundary checks
def bYCheck(grassYLower, grassYHigher=5):
    if (playerY > grassYHigher - 80) and (playerY < grassYLower - 80):
        return True
    else:
        return False

def bXCheck(grassX):
    if playerX > grassX[0] - 55 and playerX < grassX[1] - 25:
        return True
    else:
        return False

def ground():
    global playerG, isj, isi
    if bXCheck(m2grassX) and bYCheck(m2grassY):
        playerG = m2grassY - 80
    elif bXCheck(m1grassX) and bYCheck(m1grassY, m2grassY):
        playerG = m1grassY - 80
    elif bXCheck(l1grassX) and bYCheck(l1grassY):
        playerG = l1grassY - 80
    elif bXCheck(r1grassX) and bYCheck(r1grassY):
        playerG = r1grassY - 80
    else:
        isj = True
        isi = False
        playerG = 1520
        
#keyboard input assignment 
right = pg.K_RIGHT
left = pg.K_LEFT
up = pg.K_UP
down = pg.K_DOWN
sbar = pg.K_SPACE
enter = pg.K_RETURN

#game loop
iternum = 0

game_running = True
while game_running:
    #backdrop printing
    background(bgX)
    #grass
    #grass(m1grassX, m1grassY)
    #grass(m2grassX, m2grassY)
    #grass(l1grassX, l1grassY)
    #grass(r1grassX, r1grassY)
    grassM2()
    #pgC.Ground().land((200, 350), 300)

    #ground
    ground()
    #keys
    for event in pg.event.get():
        if event.type == pg.QUIT:
            game_running = False
        if event.type == pg.KEYDOWN:
            if event.key == left:
                CplayerX = -1.5
            elif event.key == right:
                CplayerX = 1.5
            if event.key == sbar:
                jump()
        if event.type == pg.KEYUP:
            if event.key == left or event.key == right:
                CplayerX = 0
            #if event.key == sbar:

    
    

    #player position
    
    if playerG > playerY + 5:
        isj = True
    if isj:
        CplayerY += 0.1
    if playerY >= playerG - 5 and isj and CplayerY > 0.1:
        isi = True
        isj = False
        playerY = playerG - 5
        CplayerY = 0
    
    playerX += CplayerX
    playerY += CplayerY
    #image printing
    player(playerX, playerY)

    #if iternum >= 3:
    #    print(str(playerY) + "pY")
    #    print(str(playerG) + "pG")
    #    iternum = 0
    #iternum += 1

    pg.display.update()
#To do:
    #make dino images smaller
    #add the ground