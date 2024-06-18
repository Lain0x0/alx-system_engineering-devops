#!/usr/bin/python3
""" Using API to scrap data from reddit (subscribers) """
import requests


def number_of_subscribers(subreddit):
    """ set up the functionality and logic of code """
    url = "https://www.reddit.com/r/{}/about.json".format(subreddit)
    headers = {
            "User-Agent":"Mozilla/5.0 (Linux; U; Linux i643 x86_64) Gecko/20100101 Firefox/50.0"
    }
    respond = requests.get(url, headers=headers, allow_redirects=False)
    if (respond.status_code == 404):
        return 0
    results = respond.json().get("data")
    return results.get("subscribers")
