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
playerX = 0
playerY = 180
CplayerX = 0
CplayerY = 0

def player(x, y):
    screen.blit(playerImg, (x, y))

#keyboard input assignment 
right = pg.K_RIGHT
left = pg.K_LEFT
up = pg.K_UP
down = pg.K_DOWN
sbar = pg.K_SPACE
enter = pg.K_RETURN

#game loop
game_running = True
while game_running:
    background(bgX)

    for event in pg.event.get():
        if event.type == pg.QUIT:
            game_running = False
        if event.type == pg.KEYDOWN:
            if event.key == left:
                CplayerX = -1.1
            elif event.key == right:
                CplayerX = 1.1
        if event.type == pg.KEYUP:
            if event.key == left or event.key == right:
                CplayerX = 0

    
    

    #player position
    playerX += CplayerX
    playerY += CplayerY
    #image printing
    player(playerX, playerY)

#To do:
    #make dino images smaller