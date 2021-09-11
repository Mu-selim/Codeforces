from dataclasses import dataclass

@dataclass
class Count:
    times_ate: int = 0
    times_wait: int = 0

n = int(input())
alice = Count()
bob = Count()
l = list(map(int, input().split()))
while len(l) != 0:
    if alice.times_wait != 0:
        alice.times_wait -= 1

    if bob.times_wait != 0:
        bob.times_wait -= 1

    if alice.times_wait == 0:
        alice.times_ate += 1
        alice.times_wait = l[0]
        l.pop(0)

    if bob.times_wait == 0:
        if len(l) != 0:
            bob.times_ate += 1
            bob.times_wait = l[-1]
            l.pop(-1)
        else:
            break
print(alice.times_ate, bob.times_ate)
