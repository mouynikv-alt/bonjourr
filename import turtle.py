import turtle
import math

def heartb(k):
    return 12 * math.cos(k) - 5 * math.cos(2*k) - 2 * math.cos(3*k)

window = turtle.Screen()
window.setup(800, 600)
window.bgcolor("black")

pen = turtle.Turtle()
pen.speed(0)
pen.hideturtle()
pen.penup()

for i in range(6000):
    k = i / 100

    x = heartb(k) * 20
    y = heartb(k) * 20

    pen.goto(x, y)

    r = abs(math.sin(i / 300))
    g = abs(math.sin(i / 200))
    b = abs(math.sin(i / 100))

    pen.pencolor(r, g, b)
    pen.pendown()

turtle.done()