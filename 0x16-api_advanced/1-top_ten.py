#!/usr/bin/python3
""" get hot post from reddit
"""
from requests import get


def top_ten(subreddit):
    """use api for get hot posts from reddit"""
    if (subreddit and type(subreddit) is str):
        url = 'https://www.reddit.com/r/{}/hot.json'.format(subreddit)
        headers = {'user-agent': 'my-app/0.0.1'}
        params = {'limit': 10}
        request = get(url, params=params, headers=headers, allow_redirects=False)
        if request.status_code == 200:
            data = request.json()
            posts = data.get('data', {}).get('children', {})
            for post in posts:
                print(post.get('data').get('title'))
        else:
            print(None)
