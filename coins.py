def arrangeCoins(coins):
    for coin in coins:
        while low <= high:
            mid = (low + high) // 2
            if mid * (mid + 1) // 2 <= coin:
                low = mid + 1
            else:
                high = mid - 1
        print(high)

def arrangeCoins2(coins):
    for n in coins:
        while low <= high:
            mid = (low + high) / 2
            if mid * (mid + 1) / 2 <= n:
                low = mid + 1
            else:
                high = mid - 1
        print(high)


if __name__ == '__main__':
    # Você pode testar a função aqui
    arrangeCoins2([6, 10, 15])