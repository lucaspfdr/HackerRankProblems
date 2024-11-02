def numPlayers(k, scores):
    scores.sort(reverse=True)
    rank = 1
    num_players = 0
    last_score = None
    players_rank = 1

    for score in scores:
        if score == 0:
            break
        if score != last_score:
            players_rank = rank
        if players_rank <= k:
            num_players += 1
        last_score = score
        rank += 1

    return num_players