#!/bin/bash
#Displays only the status code of the response of an argument passed with the giiven URL
curl -so /dev/null --write-out "%{http_code}" "$1"
