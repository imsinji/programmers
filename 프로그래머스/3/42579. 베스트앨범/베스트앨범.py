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

    answer = []
    for t in sorted(d_genre.items(), key = lambda item: item[1], reverse=True):
        count = 0
        for i in sorted(d_song_by_genre[t[0]].items(), key = lambda item: (item[1], -item[0]), reverse=True)[:2]:
            answer.append(i[0])

    return answer