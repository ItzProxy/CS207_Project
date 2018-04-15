import threading
import datetime
 
class ThreadClass(threading.Thread):
  def run(self):
    now = datetime.datetime.now()
    print ("{0} says Hello World at time: {1}".format( 
    self.getName(), now))
 
for i in range(50):
  t = ThreadClass()
  t.start()