import sys
import time

bar = ['|', '/', '-', '\\']

def progress_bar1(percentage):
    i = percentage%4
    print "\rProgress bar...%s %d%% completed." % (bar[i], percentage),
#   or using  sys.stdout.write("\rProgress bar...%s %d%% completed."%(bar[i], percentage))
    sys.stdout.flush()

for i in range(101):
    progress_bar1(i)
    time.sleep(0.1)
