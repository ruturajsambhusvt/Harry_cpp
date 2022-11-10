import socket
import time
import numpy as np
import pickle
import pygame
import sys
import random
from collections import deque

import torch
""" import torch.nn as nn
from train_cae import CAE
from train_classifier import Net
import torch.nn.functional as F """

device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

# Clear GPU
torch.cuda.empty_cache()


# Storing some important states

HOME = np.asarray([0, 0, 0, -2*np.pi/4, 0, np.pi/2, np.pi/4])
# HOME = np.asarray([-0.000453, -0.7853, 0.000176, -2.355998, -0.000627, 1.572099, 0.7859])
#HOME = np.asarray([0.022643, -0.789077, -0.000277, -2.358605, -0.005446, 1.573151, -0.708887])

# HOME = np.asarray([0.066701, -0.61756, 0.041429, -1.712728, -0.003661, 1.092369, -0.671616])
SOUPCAN = [np.asarray([-0.305573, 0.70963, -0.183403, -
                      1.500632, 0.13223, 2.214831, 0.270835])]
NOTEPAD = [np.asarray([0.344895, 0.796234, 0.227432, -
                      1.514207, -0.195541, 2.286966, 1.421964])]
# CUP = [np.asarray([-0.169027, 0.119563, -0.662496, -2.628833, 0.120918, 2.729636, -0.146264])]
TAPE = [np.asarray([-0.016421, 0.210632, 0.031353, -
                   2.594983, 0.020064, 2.816127, 0.877912])]
CUP = [np.asarray([-0.013822, 0.852029, 0.058359, -
                  1.310726, -0.054624, 2.162042, 0.835634])]
Q_MAX = [2.8, 1.7, 2.8, -0.75, 2.8, 3.7, 2.8]
Q_MIN = [-2.8, -1.7, -2.8, -3.0, -2.8, 0.0, -2.8]
TAU_FRICT = [1.75, 2.0, 1.50, 1.75, 1.25, 0.75, 0.75]
K_P = [2.25, 3.25, 2.25, 1.25, 1.25, 1.0, 1.0]
K_D = [0.5, 0.5, 0.5, 0.5, 0.5, 1.5, 2.0]
# K_I = [0.05,0.05,0.05,0.05,0.05,0.05,0.01]
K_I = [0.015, 0.015, 0.015, 0.015, 0.015, 0.01, 0.01]


def connect2robot(PORT):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    # s.bind(('172.16.0.3', PORT))
    s.bind(('192.168.1.42', PORT))
    s.listen()
    conn, addr = s.accept()
    s.setblocking(False)
    return conn


def send2robot(conn, tau, limit=1.0,reset=False):
    tau = np.asarray(tau)
    # scale = np.linalg.norm(tau)
    # if scale > limit:
    #     tau *= limit/scale
    # tau = jointlimits(state, tau)
    send_msg = np.array2string(
        tau, precision=5, separator=',', suppress_small=True)[1:-1]
    if reset:
        send_msg = "s," + send_msg + ",1,"
    else:
        send_msg = "s," + send_msg + ",0,"
        
    conn.send(send_msg.encode())



def main():

    print('[*] Connecting to low-level controller...')
    PORT = 8080
    conn = connect2robot(PORT)
    """ interface = Joystick() """
    i = 0
    while True:

        tau = 3.0*np.random.rand(7)
        
        
        if i%10 == 0:
            send2robot(conn, tau,reset=True)
        else:
            send2robot(conn, tau,reset=False)
        
        i+=1
        time.sleep(0.5)


if __name__ == "__main__":
    main()
