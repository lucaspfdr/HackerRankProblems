def countQualifiedPlayers(max_rank, player_scores):
    # Ordena as pontuações em ordem decrescente
    player_scores.sort(reverse=True)
    
    qualified_count = 0
    current_rank = 1
    previous_score = -1

    for score in player_scores:
        if score == 0:
            break  # Ignora pontuações zero
        
        if score != previous_score:
            current_rank = qualified_count + 1  # Atualiza o ranking quando a pontuação muda
        
        if current_rank > max_rank:
            break  # Para se o ranking exceder o limite `max_rank`
        
        qualified_count += 1
        previous_score = score

    return qualified_count

print(countQualifiedPlayers(4, [1,2,3,4,5,6,7,8,9]))