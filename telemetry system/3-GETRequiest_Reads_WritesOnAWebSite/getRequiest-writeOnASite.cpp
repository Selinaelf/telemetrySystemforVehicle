from flask import Flask, render_template
from socket import*
import threading

app = Flask(_name_)




@app.route('/')
def index() :
    file = open('data.txt', 'r')
    data = file.read()
    return render_template('index.html', data = data)


    if _name_ == '_main_':
app.run(debug = True, host = '192.168.50.29')