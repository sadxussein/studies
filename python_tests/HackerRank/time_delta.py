from datetime import datetime
from datetime import timedelta

import math
import os
import random
import re
import sys

def time_delta(t1, t2):
    t1 = datetime.strptime(t1, "%a %d %b %Y %H:%M:%S %z")
    t2 = datetime.strptime(t2, "%a %d %b %Y %H:%M:%S %z")
    return str(int(abs(t2-t1).total_seconds()))

n = int(input())
for _ in range(n):
    t1 = input()
    t2 = input()
    delta = time_delta(t1, t2)
    print(delta)