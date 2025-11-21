import pygame as pg
#import newgame as game
class Ground:

    def __init__(self, grass=True):
        grassImg = pg.image.load("img/grass.png")
        self.grass = grass
        #self.x = x
        #self.y = y
        self.grassImg = grassImg

    def land(self, x, y):
        if self.grass == True:
            landImg = self.grassImg
        startX = x[0]
        endX = x[1]
        for i in range(startX, endX, 20):
            game.screen.blit(landImg, (i, y))