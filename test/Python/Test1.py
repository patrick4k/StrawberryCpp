import time

t1 = time.time()

l = []

for i in range(100000):
    l.append(i)

t2 = time.time()

print(t1)
print(t2)

print(str((t2 - t1)*1000) + " ms")
