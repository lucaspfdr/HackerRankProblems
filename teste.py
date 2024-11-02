def arrangeCoins(coins):
    for n in coins:
        rows = 0
        current_row = 1
        while n >= current_row:
            n -= current_row
            rows += 1
            current_row += 1
        print(rows)

if __name__ == '__main__':
    # Example usage
    arrangeCoins([6,4,1,0])  # Should output 3