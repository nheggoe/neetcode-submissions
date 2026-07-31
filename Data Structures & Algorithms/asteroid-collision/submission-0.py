class Solution:
    def asteroidCollision(self, asteroids: list[int]) -> list[int]:
        alive = []
        positive = []
        for a in asteroids:
            if a < 0:
                if len(positive) == 0:
                    alive.append(a)
                else:
                    finish = False
                    while not finish:
                        curr = positive.pop()
                        if abs(curr) == abs(a):
                            finish = True
                        elif abs(curr) > abs(a):
                            positive.append(curr)
                            finish = True
                        else:
                            continue
            else:
                positive.append(a)
                        
        return alive + positive





            
