import sys
import time

BAR = "||||||||||||||||||||"
BAR_WIDTH = 20

def progress_bar2(percentage):
    lbar = percentage*BAR_WIDTH/100
    rbar = BAR_WIDTH-lbar
    print "\r[%.*s%*s] %d%% completed." % (lbar, BAR, rbar, "", percentage),
    sys.stdout.flush()

for i in range(101):
    progress_bar2(i)
    time.sleep(0.1)
