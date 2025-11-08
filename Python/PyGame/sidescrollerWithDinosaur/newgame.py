import pygame as pg

pg.init()

screen = pg.display.set_mode((880, 660))

backgroundImg = pg.image.load("img/1sky.png")
playerImg = pg.image.load("img/player/idle.png")
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

#player function
playerX = 400
playerY = 600

def player(x,y):
    screen.blit(playerImg, (0,0))


#game loop
game_running = True
while game_running:
    background(bgX)
    player(playerX, playerY)
    #print(bgX)

    for event in pg.event.get():
        if event.type == pg.QUIT:
            game_running = False
    
    


    #image printing
    pg.display.update()