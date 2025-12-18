def solution(genres, plays):
    d_genre = dict()
    d_song_by_genre = dict()

    for i in range(len(genres)):
        g = genres[i]
        p = plays[i]
            
        if g in d_genre:
            d_genre[g] += p
            # d_song_by_genre[g].append(i)
        else:
            d_genre[g] = p
            d_song_by_genre[g] = dict()

        temp_d = d_song_by_genre[g]
        if i in temp_d:
            temp_d[i] += p
        else:
            temp_d[i] = p

    temp = sorted(d_genre.items(), key = lambda item: item[1], reverse=True)
    print(temp)
    answer = []
    for t in temp:
        temp = sorted(d_song_by_genre[t[0]].items(), key = lambda item: (item[1], -item[0]), reverse=True)
        count = 0
        for i in temp:
            if count >= 2:
                break
            answer.append(i[0])
            count += 1
            
    return answer